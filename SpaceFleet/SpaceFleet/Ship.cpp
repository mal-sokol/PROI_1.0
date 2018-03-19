#include "Ship.hpp"

int Ship::numberOfShips = 0;

Ship::Ship()
{
	this->name = "Standard";
	this->velocity = 50;
	this->scope = 1000;
	this->durability = 50;
	
	Ship::numberOfShips++;
}

Ship::~Ship()
{
}

Ship::Ship(string name, int velocity, int scope, int durability) {
	this->name = name;
	this->velocity = velocity;
	this->scope = scope;
	this->durability = durability;
	
	Ship::numberOfShips++;
}

void Ship::getInfo() {
	cout << this->name << "\'s parameters:" << endl
		<< "velocity: " << this->velocity << " %c" << endl
		<< "scope: " << this->scope << " ly" << endl
		<< "durability: " << this->durability << " units" << endl;
}
