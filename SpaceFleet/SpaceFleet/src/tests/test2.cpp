//Test tworzy obiekty typu Weapon

#include <iostream>
#include <string>
#include "Ship.hpp"
#include "Cargo.hpp"
#include "Combat.hpp"

using namespace std;

string shipFlex(int num);

int test2() {
	
	Weapon Mistle("Mistle");
	Weapon AtomicBomb("Atomic-Bomb");
	
	Mistle.display();
	AtomicBomb.display();
	
	return 0;
}