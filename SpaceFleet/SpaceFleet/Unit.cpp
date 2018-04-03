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
//	cout << "Unit destructor at work" << endl;
	unsigned int size = this->unit.size();
	if(size) {
		for( unsigned int i = 0; i < size; i++ ) {
			cout << this->unit[i]->getName() << " Unit destroyed" << endl;
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
	
	const int width = 13;
	int margin = 5;
	cout.precision(2);
	cout << fixed;
	cout<< endl
		<< "Parametry jednostki " << setw(width) << left << this->name << right << endl
		<< setfill('-') << setw(5*width + 5) << '-' << setfill(' ') << endl
		<< setw(margin) << ' ' << "PREDKOSC: " << this->velocity << " %c" << endl
		<< setw(margin) << ' ' << "ZASIEG: " << this->scope << " ly" << endl
		<< setw(margin) << ' ' << "WYTRZYMALOSC: " << this->durability << " %" << endl
		<< setw(margin) << ' ' << "WARTOSC BOJOWA: " << this->getCombatValue() << endl
		<< setw(margin) << ' ' << "LADUNEK: " << this->getCapacity() << " Mt" << endl << endl;
}

void Unit::displayMembers() {
	const int width = 13;
	cout.precision(2);
	cout << fixed;
	unsigned int size = this->unit.size();
	if(size) {
		
		cout<< "     "
			<< setw(width) << left << "NAZWA" << right
			<< setw(width) << "PREDKOSC(%c)"
			<< setw(width) << "ZASIEG(ly)"
			<< setw(width) << "WYTRZYMALOSC"
			<< setw(width) << "FORMACJA" << endl
			<< setfill('-') << setw(5*width + 5) << '-' << setfill(' ') << endl;
		for( unsigned int i = 0; i < size; i++ ) {
			cout << right << setw(3) << i+1 << ". ";
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
		cout << "Brak statkow w jednostce" << endl;
	}
	
	this->capacity = total;
}

Unit& Unit::operator= (const Unit& other) {
	
	if(this != &other) {
		name = other.name;
		
		numOfShips = other.numOfShips;
		numOfCargo = other.numOfCargo;
		numOfCombat = other.numOfCombat;
		
		velocity = other.velocity;
		scope = other.scope;
		durability = other.durability;
		combatValue = other.combatValue;
		capacity = other.capacity;
		
		for(unsigned int i = 0; i < other.unit.size(); i++) {
			if(i < this->unit.size()) {
				cout << this->unit[i]->getName() << " destroyed" << endl;
				delete this->unit[i];
			}
			Ship& ref = *other.unit[i];
			Ship* ptr = new Ship(ref);
			this->unit.push_back(ptr);
		}
	}
	return *this;
}

Ship* Unit::getShip(unsigned int chosen) {
	
	unsigned int size = this->unit.size();
	if((chosen-1) < size) {
		return this->unit[chosen-1];
	}
	else return NULL;
}