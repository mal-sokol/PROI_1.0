#ifndef ARSENAL_HPP
#define ARSENAL_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Weapon.hpp"

using namespace std;

class Arsenal
{
	vector <Weapon> arsenal;
	
public:
	Arsenal();
	~Arsenal();
	void display();
	void add(const Weapon& weapon);

};

#endif // ARSENAL_HPP
