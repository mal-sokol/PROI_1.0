#ifndef VIEW_HPP
#define VIEW_HPP

#include <iostream>
#include <string>

#include "Ship.hpp"
#include "Cargo.hpp"
#include "Combat.hpp"
#include "Weapon.hpp"
#include "Fleet.hpp"
#include "Menu.hpp"

using namespace std;

class View
{
public:
	View();
	~View();
	
	bool start();
	void createFleet();
	Unit* createUnit();
	Ship* createShip();
	Arsenal* createArsenal();
	Weapon* createWeapon();
	int oldMain(); // zawartosc maina do rozdysponowania w oddzielne funkcje
	
private:
	Menu* menu;
	Fleet* myFleet;
};

#endif // VIEW_HPP
