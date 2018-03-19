#include <iostream>
#include <string>

using namespace std;

#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
	string name;
	int velocityInfluence;
	int scopeInfluence;
	int durabilityInfluence;
	int combatValue;
	
public:
	Weapon(string name, int velocityInfluence, int scopeInfluence, int durabilityInfluence, int combatValue);
	~Weapon();

	string getName() {return name;}
	int getVelocityInf() {return velocityInfluence;}
	int getScopeInf() {return scopeInfluence;}
	int getDurabilityInf() {return durabilityInfluence;}

};

#endif // WEAPON_HPP
