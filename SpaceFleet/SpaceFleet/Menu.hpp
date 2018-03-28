#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

#include "Ship.hpp"
#include "Combat.hpp"
#include "Cargo.hpp"
#include "Arsenal.hpp"
#include "Unit.hpp"

using namespace std;

class Menu
{
public:
	Menu();
	~Menu();
	
	void display();

};

#endif // MENU_HPP
