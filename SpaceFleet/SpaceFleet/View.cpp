#include "View.hpp"

View::View()
{
	menu = new Menu(5, 30, 25);
}

View::~View()
{
	delete menu;
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

Weapon* View::createWeapon() {
	
	string nameW;
	Weapon* weaponPtr;
	
	cout << endl << setw(5) << ' ';
	cout << "Wpisz nazwe broni: ";
	cout << setw(5) << ' ';
	
	cin >> nameW;
	while(!cin.good()) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << setw(5) << ' ';
		cin >> nameW;
	}
	weaponPtr = new Weapon(nameW);
	
	return weaponPtr;
}

void View::fillArsenal() {
	
	int numW;
	Weapon* weaponPtr;
	
//	Arsenal& arsenalRef = *(new Arsenal());
//	
	menu->howManyWeapons();
	cin >> numW;
	while(!cin.good() || (numW<1)) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << setw(5) << ' ';
		cin >> numW;
	}
	
	for(int j = 0; j<numW; j++) {
		weaponPtr = createWeapon();
		myFleet->attachToArsenal(weaponPtr);
	}
}

void View::chooseFromMain() {
	
	int choice;
	cin >> choice;
	
	while(cin.good() && (choice>0 || choice<5)) {
		switch(choice) {
			case 1:
				system("cls");
//				system("clear");
				
				myFleet->display();
//				cin.ignore(1000, '\n');
				menu->main();
				
				cin.clear();
				cin >> choice;
				break;
			case 2:
				fillArsenal();
				cin.ignore(1000, '\n');
				
				system("cls");
//				system("clear");
				
				myFleet->getArsenal()->display();
				menu->main();
				cin.clear();
				cin >> choice;
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
	chooseFromMain();
}


