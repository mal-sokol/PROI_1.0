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
	vector <Ship> unit;
	int numOfShips;
	int velocity;
	int manuverability;
	int scope;
	int durability;
	
	static int numOfUnits;

	
public:
	Unit();
	~Unit();
	void display();
	void add(const Ship& member);
	
	int getVelocity();
	int getManuverability();
	int getScope();
	int getDurability();

};

#endif // UNIT_HPP
