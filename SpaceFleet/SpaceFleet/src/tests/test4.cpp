//Test dodaje wskaznik na Weapon do obiektu Combat

#include <iostream>
#include <string>
#include "Ship.hpp"
#include "Cargo.hpp"
#include "Combat.hpp"
#include "Arsenal.hpp"

using namespace std;

int test4() {
	
	Weapon* weaponPtr;
	weaponPtr = new Weapon("Bomb");
	
	Combat myShip("Alex");
	
	myShip.display();
	cout << endl << endl;
	myShip.setWeapon(weaponPtr);
	myShip.display();
	
	getchar();
	
	delete weaponPtr;
	
	return 0;
}