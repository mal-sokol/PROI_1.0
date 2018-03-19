#include <iostream>
#include <string>
#include "Ship.hpp"

using namespace std;

#ifndef UNIT_HPP
#define UNIT_HPP

class Element {
	Ship * member;
	int rank;
	Element * next;
	
	static int numOfElements;
	
	friend class List;
};

class List {
	Element * first;
	
	friend class Unit;
};

class Unit
{
	List shipsOfUnit;
	int numOfShips;
	int velocity;
	int manuverability;
	int scope;
	int durability;
	
	static int numOfUnits;

	
public:
	Unit();
	~Unit();

};

#endif // UNIT_HPP
