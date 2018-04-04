#ifndef FLEET_HPP
#define FLEET_HPP

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

#include "Ship.hpp"
#include "Combat.hpp"
#include "Cargo.hpp"
#include "Arsenal.hpp"
#include "Unit.hpp"

using namespace std;

class Fleet
{
public:
	Fleet();
	Fleet(Arsenal& toCpy);
	~Fleet();
	
	void display();
	void shortDisplay();
	void add(Unit* newUnit);
	void assignWeapon(Combat* combat, unsigned int weapon);
	void removeWeapon(Combat* combat);
	
	unsigned int howManyUnits() { return fleet.size(); }
	
	Arsenal* getArsenal() {return &myArsenal;} // co jesli nie dodano arsenalu??
	Unit* getUnit(unsigned int chosen);
//	Unit* getUnit(string name);
	Weapon* getWeapon(unsigned int chosen);
	vector<Unit*> getFleet() {return fleet;}
	
	void attachToArsenal(Weapon* created) {this->myArsenal.add(created);} 
	
	void findBest(char criteria);
	
	bool cmpVelocity (Unit* i,Unit* j) { return (i->getVelocity() < j->getVelocity()); }
	bool cmpScope (Unit* i,Unit* j) { return (i->getScope() < j->getScope()); }
	bool cmpDurability (Unit* i,Unit* j) { return (i->getDurability() < j->getDurability()); }
	bool cmpCombatValue (Unit* i,Unit* j) { return (i->getCombatValue() < j->getCombatValue()); }
	bool cmpCapacity (Unit* i,Unit* j) { return (i->getCapacity() < j->getCapacity()); }
	
	bool hasArsenal() {
		bool x = !(myArsenal.isEmpty());
		return x;
	}
	
private:
	Arsenal myArsenal;
	vector <Unit*> fleet;
};

#endif // FLEET_HPP
