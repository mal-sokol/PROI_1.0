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
	this->loseWeapon();
}

void Combat::getWeapon(Weapon* ptr) {
	this->weapon = ptr;
}

void Combat::loseWeapon() {
	if(this->weapon) {
		this->weapon = NULL;
	}
}

void Combat::display() {
	const int width = 7;
	
	cout<< setw(width) << left << this->getName() << right
		<< setw(width) << this->getVelocity() << " %c"
		<< setw(width) << this->getScope() << " ly"
		<< setw(width) << this->getDurability() << " un"
		<< setw(width) << this->formationToString()
		<< "	combat value: " << this->getCombatValue();
	if(this->weapon) {
		cout<< "	equiped with: " << (*this->weapon).getName();
	}
	cout << endl;
}

int Combat::getVelocity() const {
	int velocity = this->Ship::getVelocity();
	int influence = 0;
	
	if(this->weapon) {
		influence = this->weapon->getVelocityInf();
		return (velocity + influence);
	}
	else return velocity;
}

int Combat::getScope() const {
	int scope = this->Ship::getScope();
	int influence = 0;
	
	if(this->weapon) {
		influence = this->weapon->getScopeInf();
	}
	return (scope + influence);
}

int Combat::getDurability() const {
	int durability = this->Ship::getDurability();
	int influence = 0;
	
	if(this->weapon) {
		influence = this->weapon->getDurabilityInf();
	}
	return (durability + influence);
}

int Combat::getCombatValue() const {
	int combatValue = this->combatValue;
	int bonus = 0;
	
	if(this->weapon) {
		bonus = this->weapon->getCombatValue();
	}
	return (combatValue + bonus);
}
