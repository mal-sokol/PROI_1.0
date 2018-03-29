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
	Menu(const int MARGIN, const int WIDTH, const int COLUMN);
	~Menu();
	
	void hello();
	void howManyUnits();
	void whichShipType();
	void header(unsigned int i, string name);
	void instructions();

private:
	
	const int margin;
	const int width;
	const int column;
};

#endif // MENU_HPP
