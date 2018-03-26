#ifndef CARGO_HPP
#define CARGO_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Ship.hpp"

using namespace std;

class Cargo : public Ship
{
public:
	void display();
	double getCapacity() const {return capacity;}
	static unsigned int getNumberOfCargo() {return numberOfCargo;}
	
	Cargo();
	Cargo(string name, double velocity = 30, double scope = 1200, double durability = 50, double capacity = 1000);
	~Cargo();
private:
	double capacity;
	static unsigned int numberOfCargo;
};

#endif // CARGO_HPP
