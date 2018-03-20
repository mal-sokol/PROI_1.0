#include <iostream>
#include <string>
#include "Ship.hpp"

using namespace std;

#ifndef CARGO_HPP
#define CARGO_HPP

class Cargo : public Ship
{
	int capacity;
	
	static int numberOfCargo;
	
public:
	void getInfo();
	static int getNumberOfCargo() {return numberOfCargo;}
	
	Cargo();
	Cargo(string name, int velocity = 30, int scope = 1200, int durability = 50, int capacity = 1000);
	~Cargo();

};

#endif // CARGO_HPP
