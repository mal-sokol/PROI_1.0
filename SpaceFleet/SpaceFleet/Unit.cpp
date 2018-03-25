#include "Unit.hpp"

int Unit::numOfUnits = 0;

Unit::Unit() {
	Unit::numOfUnits++;
}

Unit::~Unit() {
	unsigned int size = this->unit.size();
	if(size) {
		for( unsigned int i = 0; i < size; i++ ) {
			delete this->unit[i];
		}
	this->unit.clear();
	}
}

void Unit::add(Ship* member) {
	this->unit.push_back(member);
}

void Unit::display() {
	const int width = 10;
	unsigned int size = this->unit.size();
	if(size) {
		cout<< "     "
			<< setw(width) << left << "NAME" << right
			<< setw(width) << "VELOCITY"
			<< setw(width) << "SCOPE"
			<< setw(width) << "DURABILITY"
			<< setw(width) << "FORMATION" << endl
			<< setfill('-') << setw(5*width + 5) << '-' << setfill(' ') << endl;
		for( unsigned int i = 0; i < size; i++ ) {
			cout << setw(3) << i+1 << ". ";
			this->unit[i]->display();
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
					if(min > this->unit[i]->getVelocity()) {
						min = this->unit[i]->getVelocity();
					}
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
					if(min > this->unit[i]->getScope()) {
						min = this->unit[i]->getScope();
					}
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
						total += this->unit[0]->getDurability() * lineCoef;
						number += lineCoef;
						break;
					case matrix:
						total += this->unit[0]->getDurability() * matrixCoef;
						number += matrixCoef;
						break;
					case cube:
						total += this->unit[0]->getDurability() * cubeCoef;
						number += cubeCoef;
						break;
					case spear:
						total += this->unit[0]->getDurability() * spearCoef;
						number += spearCoef;
						break;
					default:
						total += this->unit[0]->getDurability();
						number++;
						break;
				}
			}
			total = total/number;
		}
	}
	
	this->scope = total;
}

void Unit::setCombatValue() {
	double total = 0;
	int inSpeare = 0;
	
	this->combatValue = total;
}