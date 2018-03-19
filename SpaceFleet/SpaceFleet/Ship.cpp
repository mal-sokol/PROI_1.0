#include "Ship.hpp"

int Ship::numberOfShips = 0;

//Ship::Ship()
//{
//}

Ship::~Ship()
{
}

Ship::Ship(string name, int velocity, int manuverability, int scope, int durability) {
	this->name = name;
	this->velocity = velocity;
	this->manuverability = manuverability;
	this->scope = scope;
	this->durability = durability;
	
	Ship::numberOfShips++;
}

void Ship::getInfo() {
	cout << this->name << "\'s parameters:" << endl
		<< "velocity: " << this->velocity << " %c" << endl
		<< "manuverability: " << this->manuverability << " units" << endl
		<< "scope: " << this->scope << " ly" << endl
		<< "durability: " << this->durability << " units" << endl;
}
