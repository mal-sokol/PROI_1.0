#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#ifndef SHIP_HPP
#define SHIP_HPP

enum formationType {
	none, line, matrix, spear, cube
};

class Ship
{
public:
	Ship();
	Ship(string name, double velocity = 50, double scope = 1000, double durability = 50);
	~Ship();
	
	string getName() const {return name;}
	double getVelocity() const {return velocity;}
	double getScope() const {return scope;}
	double getDurability() const {return durability;}
	formationType getFormation() const {return formation;}
	string formationToString() const;
	
	void setName(string name) {this->name = name;}
	void setVelocity(double velocity) {this->velocity = velocity;}
	void setScope(double scope) {this->scope = scope;}
	void setDurability(double durability) {this->durability = durability;}
	void setFormation(formationType formation) {this->formation = formation;}
	
	static int getNumberOfShips() {return numberOfShips;}
	
	void display();
	
protected:
	static int numberOfShips;
	
private:
	string name;
	double velocity;
	double scope;
	double durability;
	formationType formation;


};

#endif // SHIP_HPP
