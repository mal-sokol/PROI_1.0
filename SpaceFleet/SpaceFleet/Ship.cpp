#include "Ship.hpp"

int Ship::numberOfShips = 0;

Ship::Ship() {
	
	cout<< "Dziala domyslny konstruktor Ship"<< endl;
	this->name = "Standard";
	this->velocity = 50;
	this->scope = 1000;
	this->durability = 50;
	
	Ship::numberOfShips++;
}

Ship::Ship(string name, int velocity, int scope, int durability) {
	
	cout<< "Dziala konstruktor Ship"<< endl;
	this->name = name;
	this->velocity = velocity;
	this->scope = scope;
	this->durability = durability;
	
	Ship::numberOfShips++;
}

Ship::~Ship()
{
}


void Ship::display() {
	
	const int width = 10;
	
	cout<< setw(width) << left << this->name << right
		<< setw(width) << this->velocity << " %c"
		<< setw(width) << this->scope << " ly"
		<< setw(width) << this->durability << " u";
}
