#include "Cargo.hpp"

unsigned int Cargo::numberOfCargo = 0;

Cargo::Cargo() : Ship("StdCargo", 30, 1200, 50) {
	cout<< "Dziala domyslny konstruktor Cargo"<< endl;
	Ship::numberOfShips++;
	Cargo::numberOfCargo++;
	
	this->capacity = 1000;
}

Cargo::Cargo(string name, double velocity, double scope, double durability, double capacity) : Ship(name, velocity, scope, durability) {
	cout<< "Dziala konstruktor Cargo"<< endl;
	this->capacity = capacity;
	
	Cargo::numberOfCargo++;
}

Cargo::~Cargo() {
	cout << "~Cargo(): uruchomiono" << std::endl;

}

void Cargo::display() {
	this->Ship::display();
	cout<< "  capacity: " << this->capacity << " Mt";
}

Cargo& Cargo::operator= (const Cargo& other) {
	if(this != &other) {
		this->setName(other.getName());
		this->setVelocity(other.getVelocity());
		this->setScope(other.getScope());
		this->setDurability(other.getDurability());
		this->setFormation(other.getFormation());
		capacity = other.capacity;
	}
	return *this;
}