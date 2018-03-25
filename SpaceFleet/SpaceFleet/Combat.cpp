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

void Combat::display() {
	this->Ship::display();
	cout<< "	combat value: " << this->combatValue;
	if(this->weapon)
		cout<< "	equiped with: " << (*this->weapon).getName();
}

int Combat::getVelocity() const {
	int velocity = this->getVelocity();
	int influence = this->weapon->getVelocityInf();
	
	if(this->weapon) {
		return (velocity + influence);
	}
	else return velocity;
}

int Combat::getScope() const {
	int scope = this->getScope();
	int influence = this->weapon->getScopeInf();
	
	if(this->weapon) {
		return (scope + influence);
	}
	else return scope;
}

int Combat::getDurability() const {
	int durability = this->getDurability();
	int influence = this->weapon->getDurabilityInf();
	
	if(this->weapon) {
		return (durability + influence);
	}
	else return durability;
}

int Combat::getCombatValue() const {
	int combatValue = this->getCombatValue();
	int bonus = this->weapon->getCombatValue();
	
	if(this->weapon) {
		return (combatValue + bonus);
	}
	else return combatValue;
}
