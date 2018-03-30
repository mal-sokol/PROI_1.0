// Test tworzy obiekt Arsenal i dodaje do niego obiekty typu Weapon

#include <iostream>
#include <string>
#include <vector>
#include "Ship.hpp"
#include "Cargo.hpp"
#include "Combat.hpp"
#include "Arsenal.hpp"

using namespace std;

int test3() {
	
	Arsenal myArsenal;
	
	Weapon newWeapon();
	Weapon Balistic("Balistic");
	Weapon nextWeapon();
	
	myArsenal.add(&newWeapon);
	myArsenal.add(&nextWeapon);
	myArsenal.add(&Balistic);
	
	myArsenal.display();
	return 0;
}