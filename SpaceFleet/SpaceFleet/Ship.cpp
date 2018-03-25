#include "Ship.hpp"

int Ship::numberOfShips = 0;

Ship::Ship() {
	
	cout<< "Dziala domyslny konstruktor Ship"<< endl;
	this->name = "Standard";
	this->velocity = 50;
	this->scope = 1000;
	this->durability = 50;
	this->formation = none;
	
	Ship::numberOfShips++;
}

Ship::Ship(string name, int velocity, int scope, int durability) {
	
	cout<< "Dziala konstruktor Ship"<< endl;
	this->name = name;
	this->velocity = velocity;
	this->scope = scope;
	this->durability = durability;
	this->formation = none;
	
	Ship::numberOfShips++;
}

Ship::~Ship()
{
}


void Ship::display() {
	
	const int width = 7;
	
	cout<< setw(width) << left << this->name << right
		<< setw(width) << this->velocity << " %c"
		<< setw(width) << this->scope << " ly"
		<< setw(width) << this->durability << " un"
		<< setw(width) << this->formation;
}

string Ship::formationToString() const {
	string myFormation;
	switch(this->formation) {
		case 1:
			myFormation = "line";
			break;
		case 2:
			myFormation = "matrix";
			break;
		case 3:
			myFormation = "speare";
			break;
		case 4:
			myFormation = "cube";
			break;
		default:
			myFormation = "-";
			break;
	}
	return myFormation;
}