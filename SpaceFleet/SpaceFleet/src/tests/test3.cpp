//Test tworzy obiekty typu Weapon

#include <iostream>
#include <string>
#include "Ship.hpp"
#include "Cargo.hpp"
#include "Combat.hpp"

using namespace std;

string shipFlex(int num);

int test3() {
	
	Weapon Mistle("Mistle", -10, -10, -10, 3000);
	Weapon AtomicBomb("Atomic bomb", -80, -50, -40, 7500);
	
	Mistle.display();
	AtomicBomb.display();
	
	return 0;
}