#include "Cargo.hpp"

unsigned int Cargo::numberOfCargo = 0;

Cargo::Cargo() : Ship("StdCargo", 30, 1200, 50)
{
	cout<< "Dziala domyslny konstruktor Cargo"<< endl;
	Ship::numberOfShips++;
	Cargo::numberOfCargo++;
	
	this->capacity = 1000;
}

Cargo::Cargo(string name, double velocity, double scope, double durability, double capacity) : Ship(name, velocity, scope, durability)
{
	cout<< "Dziala konstruktor Cargo"<< endl;
	this->capacity = capacity;
	
	Cargo::numberOfCargo++;
}

Cargo::~Cargo()
{
}

void Cargo::display() {
	this->Ship::display();
	cout<< "  capacity: " << this->capacity << " Mt";
}