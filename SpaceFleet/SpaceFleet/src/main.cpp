#include <iostream>
#include <string>

#include "Ship.hpp"
#include "Cargo.hpp"
#include "Combat.hpp"
#include "Weapon.hpp"

using namespace std;

int test1();
int test2();
int test3();
int test4();
int test5();
int test6();

int main() {
	
	int test;
	cout << fixed;
	test = test6();
	cout << "Wynik testu: " << test << endl;
	return 0;
}