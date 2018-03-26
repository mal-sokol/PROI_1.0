#include "Unit.hpp"

int Unit::numOfUnits = 0;

Unit::Unit() {
	this->name = "NoName";
	this->numOfShips = 0;
	this->numOfCargo = 0;
	this->numOfCombat = 0;
	Unit::numOfUnits++;
}

Unit::Unit(string name) {
	this->name = name;
	this->numOfShips = 0;
	this->numOfCargo = 0;
	this->numOfCombat = 0;
	Unit::numOfUnits++;
}

Unit::~Unit() {
	cout << "Unit destructor at work" << endl;
	unsigned int size = this->unit.size();
	if(size) {
		for( unsigned int i = 0; i < size; i++ ) {
			cout << this->unit[i]->getName() << " destroyed" << endl;
			delete this->unit[i];
		}
	this->unit.clear();
	}
}

void Unit::add(Ship* member) {
	this->unit.push_back(member);
	
	this->numOfShips++;
	if(member->getCombatValue() != 0)
		this->numOfCombat++;
	if(member->getCapacity() != 0)
		this->numOfCargo++;
}

void Unit::display() {
	
	const int width = 12;
	
	cout.precision(2);
	cout<< setw(width) << left << this->name << right
		<< setw(width-3) << this->velocity << " %c"
		<< setw(width-3) << this->scope << " ly"
		<< setw(width-3) << this->durability << " un"
		<< setw(width) << this->getCombatValue()
		<< setw(width) << this->getCapacity() << endl;
}

void Unit::displayMembers() {
	const int width = 12;
	
	unsigned int size = this->unit.size();
	if(size) {
		cout<< "     "
			<< setw(width) << left << "NAME" << right
			<< setw(width) << "VELOCITY"
			<< setw(width) << "SCOPE"
			<< setw(width) << "DURABILITY"
			<< setw(width) << "FORMATION" << endl
			<< setfill('-') << setw(5*width + 7) << '-' << setfill(' ') << endl;
		for( unsigned int i = 0; i < size; i++ ) {
			cout << setw(3) << i+1 << ". ";
			this->unit[i]->display();
			cout << endl;
		}
	}
	else {
		cout << "This unit has no members" << endl;
	}
}

void Unit::setVelocity() {
	double total = 0;
	int inLine = 0;
	double sumVelInLine = 0;
	double min, bonus;
	
	unsigned int size = this->unit.size();
	if(size) {
		if(size == 1) { //Jesli w jednostce jest jeden statek predkosc jednostki to predkosc tego statku
			total = this->unit[0]->getVelocity();
		}
		else {
			min = this->unit[0]->getVelocity();
			for( unsigned int i = 0; i < size; i++ ) {
				if(this->unit[i]->getFormation() == line) {
					inLine++;
					sumVelInLine += this->unit[i]->getVelocity();
				}
				if(min > this->unit[i]->getVelocity()) {
					min = this->unit[i]->getVelocity();
				}
			}
			if(inLine == 0) { //Jesli w jednostce nie ma statkow w formacji linia predkosc jednostki to predkosc najwolniejszego statku
			total = min;
			}
			else {
				bonus = (int)(2*sumVelInLine*(20-inLine)); //Bonus zalezy od ilosci(x) statkow w formacji linia i ich sredniej predkosci(v) wg wzoru: -2vx(x-20)
				total = (int)(0.5*(min + bonus)); //Calkowita prekosc to srednia z predkosci minimalnej i bonusowej
			}
		}
	}
	this->velocity = total;
}

void Unit::setScope() {
	double total = 0;
	int inMatrix = 0;
	double sumScInMatrix = 0;
	double min, bonus;
	
	unsigned int size = this->unit.size();
	if(size) {
		if(size == 1) {
			total = this->unit[0]->getScope();
		}
		else {
			min = this->unit[0]->getScope();
			for( unsigned int i = 0; i < size; i++ ) {
				if(this->unit[i]->getFormation() == matrix) {
					inMatrix++;
					sumScInMatrix += this->unit[i]->getScope();
				}
				if(min > this->unit[i]->getScope()) {
					min = this->unit[i]->getScope();
				}
			}
			if(inMatrix == 0) {
			total = min;
			}
			else {
				bonus = (sumScInMatrix*(30-inMatrix));
				total = (0.5*(min + bonus));
			}
		}
	}
	
	this->scope = total;
}
void Unit::setDurability() {
	double total = 0;
	double number = 0;
	double lineCoef = 0.75;
	double matrixCoef = 1;
	double cubeCoef = 2;
	double spearCoef = 1.5;
	
	unsigned int size = this->unit.size();
	if(size) {
		if(size == 1) {
			total = this->unit[0]->getDurability();
		}
		else {
			for( unsigned int i = 0; i < size; i++ ) { //Wytrzymalosc obliczana jako srednia wazona
				switch(this->unit[i]->getFormation()) {
					case line:
						total += this->unit[i]->getDurability() * lineCoef;
						number += lineCoef;
						break;
					case matrix:
						total += this->unit[i]->getDurability() * matrixCoef;
						number += matrixCoef;
						break;
					case cube:
						total += this->unit[i]->getDurability() * cubeCoef;
						number += cubeCoef;
						break;
					case spear:
						total += this->unit[i]->getDurability() * spearCoef;
						number += spearCoef;
						break;
					default:
						total += this->unit[i]->getDurability();
						number++;
						break;
				}
			}
			total = (total/number);
		}
	}
	
	this->durability = total;
}

void Unit::setCombatValue() {
	double total = 0;
	double number = 0;
	double lineCoef = 1;
	double matrixCoef = 1;
	double cubeCoef = 0.75;
	double spearCoef = 4;
	
	unsigned int size = this->unit.size();
	if(size) {
		if(size == 1) {
			total = this->unit[0]->getCombatValue();
		}
		else {
			for( unsigned int i = 0; i < size; i++ ) { //Wytrzymalosc obliczana jako srednia wazona
				switch(this->unit[i]->getFormation()) {
					case line:
						total += this->unit[i]->getCombatValue() * lineCoef;
						number += lineCoef;
						break;
					case matrix:
						total += this->unit[i]->getCombatValue() * matrixCoef;
						number += matrixCoef;
						break;
					case cube:
						total += this->unit[i]->getCombatValue() * cubeCoef;
						number += cubeCoef;
						break;
					case spear:
						total += this->unit[i]->getCombatValue() * spearCoef;
						number += spearCoef;
						break;
					default:
						total += this->unit[i]->getCombatValue();
						number++;
						break;
				}
			}
			total = (total/number);
		}
	}
	
	this->combatValue = total;
}

void Unit::setCapacity() {
	double total = 0;
	
	unsigned int size = this->unit.size();
	if(size) {
		for( unsigned int i = 0; i < size; i++ ) {
			total += this->unit[i]->getCapacity();
		}
	}
	else {
		cout << "Youre unit has no members" << endl;
	}
	
	this->capacity = total;
}

//Projekt  uniwersalnej funkcji ustawiania parametru na podstawie rodzaju parametru (z enum w Unit.cpp)
//(nie jest modularna :( ) 
//
//void Unit::setParameter(type parameter) {
//	double (*getParameter)() const;
//	double total = 0;
//	double number = 0;
//	double lineCoef, matrixCoef, cubeCoef, spearCoef;
//	unsigned int i = 0;
//	unsigned int size = this->unit.size();
//	
//	switch(parameter) {
//		case velocity:
//			getParameter = &(this->unit[i]->getVelocity);
//			break;
//		case scope:
//			getParameter = &(this->unit[i]->getScope);
//			break;
//		case durability:
//			getParameter = &(this->unit[i]->getDurability);
//			break;
//		case combatValue:
//			getParameter = &(this->unit[i]->getCombatValue);
//			break;
//		case capactiy:
//			getParameter = &(this->unit[i]->getCapacity);
//			break;
//	}
//	
//	if(size) {
//		if(size == 1) {
//			total = getParameter();
//		}
//		else {
//			for( i = 0; i < size; i++ ) {
//				switch(parameter) {
//					case velocity:
//						lineCoef = 3;
//						matrixCoef = 1;
//						cubeCoef = 0.75;
//						spearCoef = 2;
//						break;
//					case scope:
//						lineCoef = 0.75;
//						matrixCoef = 3;
//						cubeCoef = 2;
//						spearCoef = 1;
//						break;
//					case durability:
//						lineCoef = 0.75;
//						matrixCoef = 2;
//						cubeCoef = 3;
//						spearCoef = 1.5;
//						break;
//					case combatValue:
//						lineCoef = 2;
//						matrixCoef = 1;
//						cubeCoef = 0.75;
//						spearCoef = 3;
//						break;
//					case capactiy:
//						lineCoef = 1;
//						matrixCoef = 1;
//						cubeCoef = 1;
//						spearCoef = 1;
//						break;
//					default:
//						break;
//				}
//			}
//	}
//	
//}