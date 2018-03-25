#ifndef ARSENAL_HPP
#define ARSENAL_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include "Weapon.hpp"

using namespace std;

class Arsenal 
{
public:
	Arsenal();
	~Arsenal();
	void display();
	void add(Weapon* weapon);
private:
	vector <Weapon*> arsenal;
};

#endif // ARSENAL_HPP
