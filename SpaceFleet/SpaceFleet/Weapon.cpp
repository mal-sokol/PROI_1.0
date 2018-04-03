#include "Weapon.hpp"

Weapon::Weapon() {
}

Weapon::Weapon(string name) {
	cout<< "Dziala konstruktor Weapon" <<endl;
	srand( time( NULL ));
	this->name = name;
	this->velocityInfluence = -rand()%40;
	this->scopeInfluence = -rand()%300;
	this->durabilityInfluence = rand()%40 - 20;
	this->combatValue = 100 + rand()%900;
}

Weapon::Weapon(string name, int vInf, int scInf, int dInf, int cValue) {
	this->name = name;
	this->velocityInfluence = vInf;
	this->scopeInfluence = scInf;
	this->durabilityInfluence = dInf;
	this->combatValue = cValue;
}

Weapon::Weapon(const Weapon& toCopyFrom) {
	name = toCopyFrom.name;
	velocityInfluence = toCopyFrom.velocityInfluence;
	scopeInfluence = toCopyFrom.scopeInfluence;
	durabilityInfluence = toCopyFrom.durabilityInfluence;
	combatValue =toCopyFrom.combatValue;
}

Weapon::~Weapon()
{
}

void Weapon::display() {
	int width = 13;
	
	cout<< setw(width) << left << this->name << right
		<< setw(width) << this->velocityInfluence
		<< setw(width) << this->scopeInfluence
		<< setw(width) << this->durabilityInfluence
		<< setw(width) << this->combatValue <<endl;
}

//Weapon& operator= (const Weapon& other) {
//	
//	if(this != &other) {
//		
//	}
//	return *this;
//}
