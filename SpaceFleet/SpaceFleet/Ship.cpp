#include "Ship.hpp"

int Ship::numberOfShips = 0;

Ship::Ship()
{
}

Ship::~Ship()
{
}

Ship::Ship(string name, int capacity, int velocity, int combatValue) {
	this->name = name;
	this->capacity = capacity;
	this->velocity = velocity;
	this->combatValue = combatValue;
	Ship::numberOfShips++;
}

void Ship::getInfo() {
	cout << this->name << "\'s parameters:" << endl
		<< "capacity: " << this->capacity << " units" << endl
		<< "velocity: " << this->velocity << " km/h" << endl
		<< "combat value: " << this->combatValue << " units" << endl;
}
