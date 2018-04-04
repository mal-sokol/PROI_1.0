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
#include "Fleet.hpp"

using namespace std;

class Menu
{
public:
	Menu(const int MARGIN, const int WIDTH, const int COLUMN);
	~Menu();
	
	void start();
	void howManyUnits();
	void howManyWeapons();
	void whichShipType();
	void inProgress(unsigned int i, string name);
	void main(bool hasArsenal);
	void extendMain(int option);
	void instructions();
	void formations();
	void criteria();
//	void choose(Fleet& myFleet, int option);

private:
	const int margin;
	const int width;
	const int column;
};

#endif // MENU_HPP
