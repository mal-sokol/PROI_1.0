#ifndef CARGO_HPP
#define CARGO_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include "Ship.hpp"

using namespace std;

class Cargo : public Ship
{
public:
	Cargo();
	Cargo(string name);
	~Cargo();
	Cargo& operator= (const Cargo& other);
	
	void display();
	double getCapacity() const {return capacity;}
	static unsigned int getNumberOfCargo() {return numberOfCargo;}
	
private:
	double capacity;
	static unsigned int numberOfCargo;
};

#endif // CARGO_HPP
