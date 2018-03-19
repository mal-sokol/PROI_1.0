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
	int scope;
	int durability;

	
	static int numberOfShips;
	
public:
	Ship(string name, int velocity, int scope, int durability);
//	Ship();
	~Ship();
	

	string getName() {return name;}
	int getVelocity() {return velocity;}
	int getScope() {return scope;}
	int getDurability() {return durability;}
	
	void setName(string name) {this->name = name;}
	void setVelocity(int velocity) {this->velocity = velocity;}
	void setScope(int scope) {this->scope = scope;}
	void setDurability(int durability) {this->durability = durability;}

	static int getNumberOfShips() {return numberOfShips;}
	
	void getInfo();

};

#endif // SHIP_HPP
