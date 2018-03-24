// Wersja probna arsenalu

#include <iostream>
#include <string>
#include <vector>
#include "Ship.hpp"
#include "Cargo.hpp"
#include "Combat.hpp"
#include "Arsenal.hpp"

using namespace std;

int test4() {
	
	Arsenal myArsenal;
	
	Weapon newWeapon;
	Weapon nextWeapon;
	
	myArsenal.add(newWeapon);
	myArsenal.add(nextWeapon);
	
	myArsenal.display();
	return 0;
}