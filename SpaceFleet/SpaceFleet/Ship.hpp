#include <iostream>
#include <string>

using namespace std;

#ifndef SHIP_HPP
#define SHIP_HPP

class Ship
{
private:
	string name;
	int velocity;
	int manuverability;
	int scope;
	int durability;

	
	static int numberOfShips;
	
public:
	Ship(string name, int velocity, int manuverability, int scope, int durability);
	Ship();
	~Ship();
	

	int getVelocity() {return velocity;}
	static int getNumberOfShips() {return numberOfShips;}
	
	void getInfo();

};

class Cargo : public Ship {
	
};

class Combat : public Ship {
	
};

#endif // SHIP_HPP
