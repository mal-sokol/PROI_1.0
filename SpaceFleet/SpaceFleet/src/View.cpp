#include "View.hpp"

View::View()
{
}

View::~View()
{
}

int oldMain() { // zawartosc maina do rozdysponowania w oddzielne funkcje
	
	cout << fixed;
	cout.precision(2);
	
	char a, shipType;
	int numU, numS, choice;
	string nameU, nameS;
	Ship* shipPtr;
	Unit* unitPtr;
	
	Menu menu(5, 30, 25); // Menu poczatkowe
	menu.start();
	cout << setw(5) << ' ';
	cin >> a;
	while(!cin.good() || (a!='c' && a!='q')) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << setw(5) << ' ';
		cin >> a;
	}
	if(a == 'q') { // Opcja wyjscia z programu
		return 0;
	}
	
	Fleet myFleet;
	
	menu.howManyUnits(); // Ustalanie liczby tworzonych unitow
	cin >> numU;
	while(!cin.good() || (numU<1)) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << setw(5) << ' ';
		cin >> numU;
	}
	
	for(int j = 0; j<numU; j++) {
		cout << setw(5) << ' ';
		cout << "Wpisz nazwe jednostki: ";
		cout << setw(5) << ' ';
		cin >> nameU;
		while(!cin.good()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << setw(5) << ' ';
			cin >> nameU;
		}
		unitPtr = new Unit(nameU); // Tworzenie nowego unitu
		
		
		cout << setw(5) << ' ';
		cout << "Ile statkow w jednostce?   ";
		cin >> numS;
		while(!cin.good()) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << setw(5) << ' ';
			cin >> numS;
		}
		for(int i = 0; i<numS; i++) {
			menu.inProgress(i, nameU);
			menu.whichShipType(); // Wybor typu tworzonego statku a - Ship, b - Combat, c - Cargo
			cin >> shipType;
			while(!cin.good() || (shipType != 'a' && shipType != 'b' && shipType != 'c')) { // Tworzenie wybranego rodzaju statku
				cin.clear();
				cin.ignore(1000, '\n');
				cout << setw(5) << ' ';
				cin >> shipType;
			}
				cout << setw(10) << ' ' << "NAZWA: ";
			cin >> nameS;
			while(!cin.good()) {
				cin.clear();
				cin.ignore(1000, '\n');
				cout << setw(5) << ' ';
				cin >> nameS;
			}
			switch(shipType) {
				case 'b':
					shipPtr = new Combat(nameS);
					break;
				case 'c':
					shipPtr = new Cargo(nameS);
					break;
				default:
					shipPtr = new Ship(nameS);
					break;
			}
			unitPtr->add(shipPtr); // Dodawanie statku do wektora w jednostce
		}
		unitPtr->setVelocity();
		unitPtr->setDurability();
		unitPtr->setScope();
		unitPtr->setCombatValue();
		unitPtr->setCapacity();
		
		myFleet.add(unitPtr);
	}
	
//	system("clear");
	system("cls");
	
	myFleet.display();
	menu.instructions();
	myFleet.getArsenal()->display();
	cout << "Nacisnij dowolny klawisz i enter aby kontynuowac" << endl << endl;
	cin >> a;
	cin.ignore(1000, '\n');
	
	myFleet.menu();
	cout << endl << setw(5) << ' ';
	cin >> choice;
	while(!cin.good() || (choice!=1 && choice!=2 && choice !=3)) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << setw(5) << ' ';
		cin >> choice;
	}
	myFleet.extendMenu(choice);
	
//	myFleet.choose(choice, l);
	//myFleet.~Fleet();
	
	return 0;
}