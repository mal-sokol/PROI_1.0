#include "Weapon.hpp"


Weapon::Weapon(double help) {
	cout<< "Dziala domyslny konstruktor Weapon" <<endl;
	srand( time( NULL ) * help );
	this->name = "Random";
	this->velocityInfluence = -rand()%100;
	this->scopeInfluence = -rand()%100;
	this->durabilityInfluence = rand()%100 - 50;
	this->combatValue = 100 + rand()%900;
}

Weapon::Weapon(string name, double velocityInfluence, double scopeInfluence, double durabilityInfluence, double combatValue)
{
	cout<< "Dziala konstruktor Weapon" <<endl;
	this->name = name;
	this->velocityInfluence = velocityInfluence;
	this->scopeInfluence = scopeInfluence;
	this->durabilityInfluence = durabilityInfluence;
	this->combatValue = combatValue;
}

Weapon::~Weapon()
{
}

void Weapon::display() {
	int width = 12;
	
	cout<< setw(width) << left << this->name << right
		<< setw(width) << this->velocityInfluence
		<< setw(width) << this->scopeInfluence
		<< setw(width) << this->durabilityInfluence
		<< setw(width) << this->combatValue <<endl;
}

