#include "View.hpp"

View::View()
{
	menu = new Menu(5, 30, 25);
}

View::~View()
{
//	menu.~Menu(); ???
}

bool View::start() {
	
	char exit;
	
	menu->start();
	cout << setw(5) << ' ';
	cin >> exit;
	while(!cin.good() || (exit!='c' && exit!='q')) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << setw(5) << ' ';
		cin >> exit;
	}
	if(exit == 'q') { // Opcja wyjscia z programu
		return false;
	}
	else return true;
}

void View::createFleet() {
	
	int numU;
	Unit* unitPtr;
	
	Fleet* fleetPtr = new Fleet();
	
	menu->howManyUnits(); // Ustalanie liczby tworzonych unitow
	cin >> numU;
	while(!cin.good() || (numU<1)) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << setw(5) << ' ';
		cin >> numU;
	}
	
	for(int j = 0; j<numU; j++) {
		unitPtr = createUnit();
		fleetPtr->add(unitPtr);
	}
	
	
	myFleet = fleetPtr;
}

Unit* View::createUnit() {
	
	Unit* unitPtr;
	Ship* shipPtr;
	string nameU;
	int numS;
	
	cout << endl << setw(5) << ' ';
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
		menu->inProgress(i, nameU);
		shipPtr = createShip();
		unitPtr->add(shipPtr); // Dodawanie statku do wektora w jednostce
	}
	unitPtr->setVelocity();
	unitPtr->setDurability();
	unitPtr->setScope();
	unitPtr->setCombatValue();
	unitPtr->setCapacity();
	
	return unitPtr;
}

Ship* View::createShip() {
	
	string nameS;
	Ship* shipPtr;
	char shipType;
	
	menu->whichShipType(); // Wybor typu tworzonego statku a - Ship, b - Combat, c - Cargo
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
	return shipPtr;
}

void View::chooseFromMain(Fleet* myFleet) {
	
	int choice;
	cin >> choice;
	
	while(cin.good() && (choice>0 || choice<5)) {
		switch(choice) {
			case 1:
				system("cls");
//				system("clear");
				
				myFleet->display();
				cin.ignore(1000, '\n');
				break;
			case 2:
				
				break;
			case 3:
				
				break;
			case 4:
				
				break;
		}
	}
}

void View::showMain() {
	menu->main();
	chooseFromMain(myFleet);
}



int View::oldMain() { // zawartosc maina do rozdysponowania w oddzielne funkcje
	
	cout << fixed;
	cout.precision(2);
	
//	system("clear");
	system("cls");
	
//	myFleet.display();
//	menu->instructions();
//	myFleet.getArsenal()->display();
//	cout << "Nacisnij dowolny klawisz i enter aby kontynuowac" << endl << endl;
//	cin >> a;
//	cin.ignore(1000, '\n');
//	
//	menu.main();
//	cout << endl << setw(5) << ' ';
//	cin >> choice;
//	while(!cin.good() || (choice!=1 && choice!=2 && choice !=3)) {
//		cin.clear();
//		cin.ignore(1000, '\n');
//		cout << setw(5) << ' ';
//		cin >> choice;
//	}
//	menu.extendMain(choice);
//	
//	myFleet.choose(choice, l);
	//myFleet.~Fleet();
	
	return 0;
}