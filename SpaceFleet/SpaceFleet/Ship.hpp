#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#ifndef SHIP_HPP
#define SHIP_HPP

class Ship
{
public:
	Ship();
	Ship(string name, int velocity = 50, int scope = 1000, int durability = 50);
	~Ship();
	
	enum formationType {
		none, line, matrix, speare, cube
	};
	
	string getName() const {return name;}
	int getVelocity() const {return velocity;}
	int getScope() const {return scope;}
	int getDurability() const {return durability;}
	formationType getFormation() const {return formation;}
	
	void setName(string name) {this->name = name;}
	void setVelocity(int velocity) {this->velocity = velocity;}
	void setScope(int scope) {this->scope = scope;}
	void setDurability(int durability) {this->durability = durability;}
	void setFormation(formationType formation) {this->formation = formation;}
	
	static int getNumberOfShips() {return numberOfShips;}
	
	void display();
	
protected:
	static int numberOfShips;
	
private:
	string name;
	int velocity;
	int scope;
	int durability;
	formationType formation;


};

#endif // SHIP_HPP
