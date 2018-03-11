#include <iostream>
#include <string>

using namespace std;

#ifndef SHIP_HPP
#define SHIP_HPP

class Ship
{
private:
	string name;
	int capacity;
	int velocity;
	int combatValue;
	
	static int numberOfShips;
	
public:
	Ship(string name, int capacity, int velocity, int combatValue);
	Ship();
	~Ship();
	
	int getCapacity() {return capacity;}
	int getVelocity() {return velocity;}
	int getCombatValue() {return combatValue;}
	static int getNumberOfShips() {return numberOfShips;}
	
	void getInfo();

};

#endif // SHIP_HPP
