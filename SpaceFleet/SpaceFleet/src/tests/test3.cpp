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
	
	Weapon* ptr1 = new Weapon("X");
	Weapon* ptr2 = new Weapon("Y");
	Weapon* ptr3 = new Weapon();
	
	myArsenal.add(ptr1);
	myArsenal.add(ptr2);
	myArsenal.add(ptr3);
	
	myArsenal.display();
	return 0;
}