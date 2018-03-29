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
public:
	Weapon();
	Weapon(const Weapon& toCopyFrom);
	Weapon(string name, int vInf, int scInf, int dInf, int cValue);
	Weapon(string name);
	~Weapon();

	string getName() {return name;}
	double getVelocityInf() {return velocityInfluence;}
	double getScopeInf() {return scopeInfluence;}
	double getDurabilityInf() {return durabilityInfluence;}
	double getCombatValue() {return combatValue;}
	void display();
	
private:
	string name;
	double velocityInfluence;
	double scopeInfluence;
	double durabilityInfluence;
	double combatValue;
	
};

#endif // WEAPON_HPP
