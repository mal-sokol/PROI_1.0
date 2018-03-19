#include <iostream>
#include <string>
#include "Ship.hpp"

using namespace std;

#ifndef COMBAT_HPP
#define COMBAT_HPP

class Combat : public Ship
{
	int combatValue;
	
	static int numberOfCombat;
	
public:
	void getInfo();
	static int getNumberOfCombat() {return numberOfCombat;}
	Combat(string name, int velocity, int manuverability, int scope, int durability, int combatValue);
	~Combat();

};

#endif // COMBAT_HPP
