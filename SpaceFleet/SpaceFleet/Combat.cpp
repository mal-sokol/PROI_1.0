#include "Combat.hpp"

int Combat::numberOfCombat = 0;

Combat::Combat() : Ship("StdCombat", 70, 750, 70)
{
	cout<< "Dziala domyslny konstruktor Combat"<< endl;
	Combat::numberOfCombat++;
	
	this->combatValue = 100;
	this->weapon = NULL;
}

Combat::Combat(string name, int velocity, int scope, int durability, int combatValue) : Ship(name, velocity, scope, durability)
{
	cout<< "Dziala domyslny konstruktor Combat"<< endl;
	this->combatValue = combatValue;
	this->weapon = NULL;
	
	Combat::numberOfCombat++;
}

Combat::~Combat()
{
}

void Combat::getInfo() {
	this->Ship::getInfo();
	cout<< "combat value: " << this->combatValue << endl;
	if(this->weapon)
		cout<< "equiped with: " << (*this->weapon).getName() << endl;
}

