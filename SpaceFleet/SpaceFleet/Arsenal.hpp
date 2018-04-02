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
	Arsenal(const Arsenal& toCopyFrom);
	~Arsenal();
	Arsenal& operator= (const Arsenal& other);
	
	void display();
	void add(Weapon* weapon);
	void remove(unsigned int i);
	Weapon* getWeapon(unsigned int i);
	
private:
	vector <Weapon*> arsenal;
};

#endif // ARSENAL_HPP
