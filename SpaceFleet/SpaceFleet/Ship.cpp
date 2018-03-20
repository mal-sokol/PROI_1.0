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


void Ship::getInfo() {
	cout << this->name << "\'s parameters:" << endl
		<< "velocity: " << this->velocity << " %c" << endl
		<< "scope: " << this->scope << " ly" << endl
		<< "durability: " << this->durability << " units" << endl;
	
//	printf("%10s%10d%10d%10d", this->name, this->velocity, this->scope, this->durability);
}
