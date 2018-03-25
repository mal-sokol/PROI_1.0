#include "Combat.hpp"

int Combat::numberOfCombat = 0;

Combat::Combat() : Ship("StdCombat", 70, 750, 70)
{
	cout<< "Dziala domyslny konstruktor Combat"<< endl;
	Combat::numberOfCombat++;
	
	this->combatValue = 100;
	this->weapon = NULL;
}

Combat::Combat(string name, double velocity, double scope, double durability, double combatValue) : Ship(name, velocity, scope, durability)
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

double Combat::getVelocity() const {
	double velocity = this->Ship::getVelocity();
	double influence = 0;
	
	if(this->weapon) {
		influence = this->weapon->getVelocityInf();
		return (velocity + influence);
	}
	else return velocity;
}

double Combat::getScope() const {
	double scope = this->Ship::getScope();
	double influence = 0;
	
	if(this->weapon) {
		influence = this->weapon->getScopeInf();
	}
	return (scope + influence);
}

double Combat::getDurability() const {
	double durability = this->Ship::getDurability();
	double influence = 0;
	
	if(this->weapon) {
		influence = this->weapon->getDurabilityInf();
	}
	return (durability + influence);
}

double Combat::getCombatValue() const {
	double combatValue = this->combatValue;
	double bonus = 0;
	
	if(this->weapon) {
		bonus = this->weapon->getCombatValue();
	}
	return (combatValue + bonus);
}
