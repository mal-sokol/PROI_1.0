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
	Cargo(string name, int velocity, int manuverability, int scope, int durability, int capacity);
	~Cargo();

};

#endif // CARGO_HPP
