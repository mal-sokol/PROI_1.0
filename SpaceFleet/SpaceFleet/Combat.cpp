#include "Combat.hpp"

unsigned int Combat::numberOfCombat = 0;

Combat::Combat() : Ship() {
//	cout<< "Dziala domyslny konstruktor Combat"<< endl;
	Combat::numberOfCombat++;
	
	this->combatValue = 100;
	this->weapon = NULL;
}

Combat::Combat(string name) : Ship(name) {
//	cout<< "Dziala konstruktor Combat"<< endl;
	srand( time( NULL ));
	this->combatValue = (rand()+500)%1500;
	this->weapon = NULL;
	
	Combat::numberOfCombat++;
}

Combat::Combat(const Combat& toCopyFrom) : Ship(toCopyFrom) {
	combatValue = toCopyFrom.combatValue;
	weapon = NULL;
}

Combat::~Combat()
{
	this->loseWeapon();
//	cout << "~Combat(): uruchomiono" << std::endl;

}

void Combat::getWeapon(Weapon* ptr) {
	this->weapon = ptr;
}

void Combat::loseWeapon() {
	if(this->weapon) {
		// Funkcja powinna zwracac bron do arsenalu
		delete this->weapon;
		this->weapon = NULL;
	}
}

void Combat::display() {
	
	this->Ship::display();
	cout<< "  combat value: " << this->getCombatValue();
	if(this->weapon) {
		cout<< "  equiped with: " << (*this->weapon).getName();
	}
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

Combat& Combat::operator= (const Combat& other){
	if(this != &other) {
		this->setName(other.getName());
		this->setVelocity(other.getVelocity());
		this->setScope(other.getScope());
		this->setDurability(other.getDurability());
		this->setFormation(other.getFormation());
		combatValue = other.combatValue;
		if(other.weapon) {
			Weapon* ptr = new Weapon(*other.weapon);
			weapon = ptr;
		}
		else weapon = NULL;
	}
	return *this;
}