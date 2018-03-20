#include <iostream>
#include <string>
#include "Ship.hpp"
#include "Weapon.hpp"

using namespace std;

#ifndef COMBAT_HPP
#define COMBAT_HPP

class Combat : public Ship
{
	int combatValue;
	Weapon * weapon;
	
	static int numberOfCombat;
	
public:
	void getInfo();
	static int getNumberOfCombat() {return numberOfCombat;}
	
	Combat();
	Combat(string name, int velocity = 70, int scope = 750, int durability = 70, int combatValue = 100);
	~Combat();

};

#endif // COMBAT_HPP
