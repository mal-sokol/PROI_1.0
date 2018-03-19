#include "Cargo.hpp"
#include "Ship.hpp"

Cargo::Cargo(string name, int velocity, int manuverability, int scope, int durability, int capacity) : Ship(name, velocity, manuverability, scope, durability)
{
//	Ship::Ship(string name, int velocity, int manuverability, int scope, int durability);
	this->capacity = capacity;
}

Cargo::~Cargo()
{
}

void Cargo::getInfo() {
	this->Ship::getInfo();
	cout<< "capacity: " << this->capacity << " M" << endl;
}