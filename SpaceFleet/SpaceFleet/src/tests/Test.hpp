#ifndef TEST_HPP
#define TEST_HPP

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
};

#endif // TEST_HPP
