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
	Cargo(string name, double velocity = 30, double scope = 1200, double durability = 50, double capacity = 1000);
	~Cargo();
private:
	double capacity;
	static int numberOfCargo;
};

#endif // CARGO_HPP
