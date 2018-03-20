#include "Weapon.hpp"

string spacing(int, int);

Weapon::Weapon(string name, int velocityInfluence, int scopeInfluence, int durabilityInfluence, int combatValue)
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

void Weapon::getInfo() {
	cout<< this->name << spacing((this->name).length(), 20) << this->velocityInfluence <<"%c  "<< this->scopeInfluence <<"ly  "
		<< this->durabilityInfluence <<"units  combat value: "<< this->combatValue <<endl;
}

