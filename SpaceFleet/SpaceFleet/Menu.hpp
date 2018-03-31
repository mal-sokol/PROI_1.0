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
	
	void start();
	void howManyUnits();
	void whichShipType();
	void inProgress(unsigned int i, string name);
	void main();
	void instructions();

private:
	
	const int margin;
	const int width;
	const int column;
};

#endif // MENU_HPP
