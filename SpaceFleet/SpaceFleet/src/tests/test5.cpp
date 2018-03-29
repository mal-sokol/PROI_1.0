//Testowanie funkcji getWeapon i loseWeapon statku typu Combat

#include <iostream>
#include <string>
#include "Ship.hpp"
#include "Cargo.hpp"
#include "Combat.hpp"
#include "Arsenal.hpp"

using namespace std;

int test5() {
	
	Weapon* weaponPtr;
	weaponPtr = new Weapon("Bomb");
	
	Combat myShip("Alex");
	
	myShip.display();
	cout << endl << endl;
	myShip.getWeapon(weaponPtr);
	myShip.display();
	
	getchar();
	
	delete weaponPtr;
	
	return 0;
}