#ifndef COMBAT_HPP
#define COMBAT_HPP

#include <iostream>
#include <string>
#include "Ship.hpp"
#include "Weapon.hpp"
#include "Arsenal.hpp"

using namespace std;

class Combat : public Ship
{
public:
	void display();
	void getWeapon(Weapon* weapon);
	void loseWeapon();
	
	static int getNumberOfCombat() {return numberOfCombat;}
	int getVelocity() const;
	int getScope() const;
	int getDurability() const;
	int getCombatValue() const;
	
	Combat();
	Combat(string name, int velocity = 70, int scope = 750, int durability = 70, int combatValue = 100);
	~Combat();
private:
	int combatValue;
	Weapon * weapon;
	
	static int numberOfCombat;
};

#endif // COMBAT_HPP
