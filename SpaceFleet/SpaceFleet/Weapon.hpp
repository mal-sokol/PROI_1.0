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
	double velocityInfluence;
	double scopeInfluence;
	double durabilityInfluence;
	double combatValue;
	
public:
	Weapon(double help);
	Weapon(string name, double velocityInfluence, double scopeInfluence, double durabilityInfluence, double combatValue);
	~Weapon();

	string getName() {return name;}
	double getVelocityInf() {return velocityInfluence;}
	double getScopeInf() {return scopeInfluence;}
	double getDurabilityInf() {return durabilityInfluence;}
	double getCombatValue() {return combatValue;}
	
	void display();

};

#endif // WEAPON_HPP
