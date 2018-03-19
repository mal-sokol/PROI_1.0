#include "Weapon.hpp"

Weapon::Weapon(string name, int velocityInfluence, int scopeInfluence, int durabilityInfluence, int combatValue)
{
	this->name = name;
	this->velocityInfluence = velocityInfluence;
	this->scopeInfluence = scopeInfluence;
	this->durabilityInfluence = durabilityInfluence;
	this->combatValue = combatValue;
}

Weapon::~Weapon()
{
}

