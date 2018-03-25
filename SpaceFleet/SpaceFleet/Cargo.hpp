#ifndef CARGO_HPP
#define CARGO_HPP

#include <iostream>
#include <string>
#include "Ship.hpp"

using namespace std;

class Cargo : public Ship
{
public:
	void display();
	static int getNumberOfCargo() {return numberOfCargo;}
	
	Cargo();
	Cargo(string name, int velocity = 30, int scope = 1200, int durability = 50, int capacity = 1000);
	~Cargo();
private:
	int capacity;
	static int numberOfCargo;
};

#endif // CARGO_HPP
