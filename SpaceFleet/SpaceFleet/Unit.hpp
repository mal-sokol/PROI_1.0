#ifndef UNIT_HPP
#define UNIT_HPP

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "Ship.hpp"

using namespace std;

//enum { velocity, scope, durability, combatValue, capactiy };

class Unit
{
public:
	Unit();
	Unit(string name);
	~Unit();
	void display();
	void displayMembers();
	void add(Ship* member);
	
	void setName(string name) {this->name = name;}
	void setVelocity();
	void setScope();
	void setDurability();
	void setCombatValue();
	void setCapacity();
	
	string getName() const {return name;}
	
	unsigned int getNumOfShips() {return numOfShips;}
	unsigned int getNumOfCargo() {return numOfCargo;}
	unsigned int getNumOfCombat() {return numOfCombat;}
	
	double getVelocity() const {return velocity;}
	double getScope() const {return scope;}
	double getDurability() const {return durability;}
	double getCombatValue() const {return combatValue;}
	double getCapacity() const {return capacity;}
	static int getNumOfUnits() {return numOfUnits;}

private:
	vector <Ship*> unit;
	string name;
	
	unsigned int numOfShips;
	unsigned int numOfCargo;
	unsigned int numOfCombat;
	
	double velocity;
	double scope;
	double durability;
	double combatValue;
	double capacity;
	
	static int numOfUnits;
};

#endif // UNIT_HPP
