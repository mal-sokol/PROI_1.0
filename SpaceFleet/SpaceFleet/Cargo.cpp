#include "Cargo.hpp"
#include "Ship.hpp"

int Cargo::numberOfCargo = 0;

Cargo::Cargo(string name, int velocity, int manuverability, int scope, int durability, int capacity) : Ship(name, velocity, manuverability, scope, durability)
{
	this->capacity = capacity;
	
	Cargo::numberOfCargo++;
}

Cargo::~Cargo()
{
}

void Cargo::getInfo() {
	this->Ship::getInfo();
	cout<< "capacity: " << this->capacity << " Mt" << endl;
}