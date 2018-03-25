#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

class Weapon
{
	string name;
	int velocityInfluence;
	int scopeInfluence;
	int durabilityInfluence;
	int combatValue;
	
public:
	Weapon(double help);
	Weapon(string name, int velocityInfluence, int scopeInfluence, int durabilityInfluence, int combatValue);
	~Weapon();

	string getName() {return name;}
	int getVelocityInf() {return velocityInfluence;}
	int getScopeInf() {return scopeInfluence;}
	int getDurabilityInf() {return durabilityInfluence;}
	int getCombatValue() {return combatValue;}
	
	void display();

};

#endif // WEAPON_HPP
