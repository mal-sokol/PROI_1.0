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
	
	int oldMain(); // zawartosc maina do rozdysponowania w oddzielne funkcje
};

#endif // VIEW_HPP
