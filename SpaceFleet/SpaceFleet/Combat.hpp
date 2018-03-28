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
	Combat();
	Combat(const Combat& toCopyFrom);
	Combat(string name, double velocity = 70, double scope = 750, double durability = 70, double combatValue = 100);
	~Combat();
	Combat& operator= (const Combat& other);
	
	void display();
	void getWeapon(Weapon* weapon);
	void loseWeapon();
	
	static unsigned int getNumberOfCombat() {return numberOfCombat;}
	double getVelocity() const;
	double getScope() const;
	double getDurability() const;
	double getCombatValue() const;
	
private:
	double combatValue;
	Weapon * weapon;
	
	static unsigned int numberOfCombat;
};

#endif // COMBAT_HPP
