#ifndef UNIT_HPP
#define UNIT_HPP

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "Ship.hpp"

using namespace std;

class Unit
{
	vector <Ship*> unit;
	double numOfShips;
	double velocity;
	double scope;
	double durability;
	double combatValue;
	double capactiy;
	
	static int numOfUnits;

	
public:
	Unit();
	~Unit();
	void display();
	void add(Ship* member);
	
	void setVelocity();
	void setScope();
	void setDurability();
	void setCombatValue();
	
	double getVelocity() const {return velocity;}
	double getScope() const {return scope;}
	double getDurability() const {return durability;}
	double getCombatValue() const {return combatValue;}

};

#endif // UNIT_HPP
