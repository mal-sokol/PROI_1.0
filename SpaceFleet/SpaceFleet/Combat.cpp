#include "Combat.hpp"

int Combat::numberOfCombat = 0;

Combat::Combat(string name, int velocity, int manuverability, int scope, int durability, int combatValue) : Ship(name, velocity, manuverability, scope, durability)
{
	this->combatValue = combatValue;
	
	Combat::numberOfCombat++;
}

Combat::~Combat()
{
}

void Combat::getInfo() {
	this->Ship::getInfo();
	cout<< "combat value: " << this->combatValue << endl;
}