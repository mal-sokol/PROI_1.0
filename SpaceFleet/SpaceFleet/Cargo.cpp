#include "Cargo.hpp"

int Cargo::numberOfCargo = 0;

Cargo::Cargo() : Ship("StdCargo", 30, 1200, 50)
{
	Ship::numberOfShips++;
	Cargo::numberOfCargo++;
	
	this->capacity = 1000;
}

Cargo::Cargo(string name, int velocity, int scope, int durability, int capacity) : Ship(name, velocity, scope, durability)
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