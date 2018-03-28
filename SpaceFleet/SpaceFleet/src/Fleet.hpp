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
	void add(Unit* newUnit);
	void assignWeapon(Unit* unit, Combat* ship, Weapon* weapon);
	void removeWeapon(unsigned int unit, unsigned int ship);
	
	Arsenal& getArsenal() {return myArsenal;}
	Unit* getUnit(unsigned int chosen);
	Unit* getUnit(string name);
	Weapon* getWeapon(unsigned int chosen);
	
private:
	Arsenal myArsenal;
	vector <Unit*> fleet;
};

#endif // FLEET_HPP
