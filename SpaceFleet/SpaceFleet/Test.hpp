#ifndef TEST_HPP
#define TEST_HPP

#include <iostream>
#include <string>

#include "Ship.hpp"
#include "Cargo.hpp"
#include "Combat.hpp"
#include "Weapon.hpp"
#include "Fleet.hpp"
#include "Menu.hpp"
#include "View.hpp"

class Test
{
public:
	Test();
	~Test();
	
	int test1(); //tworzy obiekty typu Ship, Cargo i Combat oraz wyswietla dane obiektow
	int test2(); //tworzy obiekty typu Weapon
	int test3(); //tworzy obiekt Arsenal i dodaje do niego obiekty typu Weapon
	int test4(); //dodaje wskaznik na Weapon do obiektu Combat
	int test5(); //tworzy unit i dodaje do niego wskazania na statki, wylicza parametry unitu i je wyswietla
	int test6(); //wyswietla menu
	int test7(); //Jakie parametry floty nadaje konstruktor? Test funkcji Fleet::display()
};

#endif // TEST_HPP
