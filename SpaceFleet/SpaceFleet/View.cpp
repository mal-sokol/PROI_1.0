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
//	myFleet->shortDisplay();
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
	char which;
	bool hasArsenal = myFleet->hasArsenal();
	
	menu->main(hasArsenal);
	
	cin >> choice;
	
	while(cin.good() && choice>0 && choice<6) {
		switch(choice) {
			case 1:
				system("cls");
//				system("clear");
				
				myFleet->display();
//				cin.ignore(1000, '\n');
				menu->main(hasArsenal);
				
//				cin.clear();
//				cin >> choice;
				break;
			case 2:
				fillArsenal();
				cin.ignore(1000, '\n');
				
				system("cls");
//				system("clear");
				
				myFleet->getArsenal()->display();
				cin.ignore(1000, '\n');
				break;
			case 3:
				chooseFormation();
				cin.ignore(1000, '\n');

				break;
			case 4:
				menu->criteria();
				cin >> which;
				while(!cin.good() || tolower(which) < 'a' || tolower(which) > 'e') {
					cin.ignore(1000, '\n');
					cin.clear();
					cin >> which;
				}
				myFleet->findBest(which);
				break;
			case 5:
				if(hasArsenal) {
				armAShip();
				cin.ignore(1000, '\n');
				}
				break;
		}
		system("cls");
//		system("clear");
		hasArsenal = myFleet->hasArsenal();
		menu->main(hasArsenal);
		cin.ignore(1000, '\n');
		cin >> choice;
	}
}



void View::chooseFormation() {
	
	menu->formations();
	
	int choice;
	cin >> choice;
	
	while(cin.good() && choice>=0 && choice<5) {
		formation(choice);
		menu->formations();
		cin >> choice;
	}
	cin.ignore(1000, '\n');
	cin.clear();
}

void View::formationHeader(int choice) {
	
	int margin = 5;
	int width = 35;
	
	switch(choice) {
		case 0:
			cout << endl
			<< setw(margin-2) << ' ' << right << setfill('*') << setw(width-7) << " " 
			<< "USUWANIE Z FORMACJI" << left << setw(width-8) << " " << setfill(' ') << endl << endl;
			break;
		case 1:
			cout << endl
			<< setw(margin-2) << ' ' << right << setfill('*') << setw(width) << " " << "LINE" << left << setw(width) << " " << setfill(' ') << endl << endl;
			break;
		case 2:
			cout << endl
			<< setw(margin-2) << ' ' << right << setfill('*') << setw(width-1) << " " << "MATRIX" << left << setw(width-1) << " " << setfill(' ') << endl << endl;
			break;
		case 3:
			cout << endl
			<< setw(margin-2) << ' ' << right << setfill('*') << setw(width-1) << " " << "SPEARE" << left << setw(width-1) << " " << setfill(' ') << endl << endl;
			break;
		case 4:
			cout << endl
			<< setw(margin-2) << ' ' << right << setfill('*') << setw(width) << " " << "CUBE" << left << setw(width-1) << " " << setfill(' ') << endl << endl;
			break;
	}
}

void View::formation(int choice) {
	
	formationType formation = (formationType)choice;
	int margin = 5;
	unsigned int whichUnit, whichShip;
	unsigned int size = myFleet->howManyUnits();
	
	system("cls");
//	system("clear");
	
	
	formationHeader(choice);
	myFleet->shortDisplay();
	cout << endl
	<< setw(margin) << ' ' << "Podaj pozycje wybranwej jenostki lub przejdz dalej: " << setw(margin) << ' ' ;
	cin >> whichUnit;
//	cin.ignore(1000, '\n');
	
	while(cin.good() && (whichUnit > 0 && whichUnit <= size)) {
		
		system("cls");
//		system("clear");
		formationHeader(choice);
		
		myFleet->getUnit(whichUnit)->display();
		myFleet->getUnit(whichUnit)->displayMembers();
		
		unsigned int unitSize = myFleet->getUnit(whichUnit)->getNumOfShips();
		
		cout << setw(margin) << ' ' << "Podaj pozycje wybranego statku: " << setw(margin) << ' ' ;
//		cin.clear();
		cin >> whichShip;

		
		while(cin.good() && whichShip > 0 && whichShip <= unitSize) {
			
			
			cin.ignore(1000, '\n');
			system("cls");
//			system("clear");
			formationHeader(choice);
			
			myFleet->getUnit(whichUnit)->getShip(whichShip)->setFormation(formation);
			
			myFleet->getUnit(whichUnit)->setDurability();
			myFleet->getUnit(whichUnit)->setVelocity();
			myFleet->getUnit(whichUnit)->setScope();
			myFleet->getUnit(whichUnit)->setCombatValue();
			myFleet->getUnit(whichUnit)->setCapacity();
			


			myFleet->getUnit(whichUnit)->display();
			myFleet->getUnit(whichUnit)->displayMembers();
			cout << setw(margin) << ' ' << "Podaj pozycje wybranego statku lub przejdz dalej: " << setw(margin) << ' ' ;
			
//			cin.ignore(1000, '\n');
//			cin.clear();
			cin >> whichShip;
		}
//		cin.ignore(1000, '\n');
//		cin.sync();
		
		system("cls");
//		system("clear");

		formationHeader(choice);
		
		myFleet->shortDisplay();
		cout << endl
			<< setw(margin) << ' ' << "Podaj pozycje wybranwej jenostki lub przejdz dalej: " << setw(margin) << ' ' ;
		cin >> whichUnit;
//		cin.ignore(1000, '\n');
	}
	cin.ignore(1000, '\n');
	cin.clear();
	
	system("cls");
//	system("clear");
}



void View::armAShip() {
	
	int margin = 5;
	unsigned int whichUnit, whichShip, whichWeapon;
	unsigned int size = myFleet->howManyUnits();
	
	system("cls");
//	system("clear");
	
	myFleet->getArsenal()->display();
	myFleet->shortDisplay();
	cout << endl
	<< setw(margin) << ' ' << "Podaj pozycje wybranwej jenostki lub przejdz dalej: " << setw(margin) << ' ' ;
	cin >> whichUnit;
	
	while(cin.good() && (whichUnit > 0 && whichUnit <= size)) {
		
		system("cls");
//		system("clear");
		
		myFleet->getArsenal()->display();
		myFleet->getUnit(whichUnit)->display();
		myFleet->getUnit(whichUnit)->displayCombat();
		
//		unsigned int numOfCombat = myFleet->getUnit(whichUnit)->getNumOfCombat();
		unsigned int numOfShips = myFleet->getUnit(whichUnit)->getNumOfShips();
		
		cout << setw(margin) << ' ' << "Podaj pozycje wybranego statku: " << setw(margin) << ' ' ;
		cin >> whichShip;

		
		while(cin.good() && whichShip > 0 && whichShip <= numOfShips) {
			
			if(myFleet->getUnit(whichUnit)->getShip(whichShip)->getCombatValue() != 0) {
				cin.ignore(1000, '\n');
				system("cls");
//				system("clear");
				myFleet->getUnit(whichUnit)->display();
				myFleet->getUnit(whichUnit)->displayCombat();
				myFleet->getArsenal()->display();
				cout << setw(margin) << ' ' << "Podaj pozycje wybranej broni: " << setw(margin) << ' ' ;
				cin >> whichWeapon;
				
				unsigned int arsenalSize = myFleet->getArsenal()->howManyWeapons();
				
				while(cin.good() && whichWeapon > 0 && whichWeapon <= arsenalSize) {
					
//					Arsenal* aPtr = myFleet->getArsenal();
					Weapon weapon = (*myFleet->getArsenal()->getWeapon(whichWeapon));
					Weapon* wPtr = &weapon;
					Combat* cPtr = static_cast<Combat*> (myFleet->getUnit(whichUnit)->getShip(whichShip));
					cPtr->setWeapon(wPtr);
					
					myFleet->getUnit(whichUnit)->setDurability();
					myFleet->getUnit(whichUnit)->setVelocity();
					myFleet->getUnit(whichUnit)->setScope();
					myFleet->getUnit(whichUnit)->setCombatValue();
					myFleet->getUnit(whichUnit)->setCapacity();
					
					myFleet->getUnit(whichUnit)->display();
					myFleet->getUnit(whichUnit)->displayCombat();
					myFleet->getArsenal()->display();
					cout << setw(margin) << ' ' << "Podaj pozycje wybranej broni: " << setw(margin) << ' ' ;
					cin >> whichWeapon;
				}
			}
			
			myFleet->getArsenal()->display();
			myFleet->getUnit(whichUnit)->display();
			myFleet->getUnit(whichUnit)->displayCombat();
			
			cin.ignore(1000, '\n');
			cin.clear();
			
			cout << setw(margin) << ' ' << "Podaj pozycje wybranego statku lub przejdz dalej: " << setw(margin) << ' ' ;
			cin >> whichShip;
		}
//		cin.ignore(1000, '\n');
//		cin.sync();
		
		system("cls");
//		system("clear");
		
		myFleet->shortDisplay();
		cout << endl
			<< setw(margin) << ' ' << "Podaj pozycje wybranwej jenostki lub przejdz dalej: " << setw(margin) << ' ' ;
		cin >> whichUnit;
//		cin.ignore(1000, '\n');
	}
	cin.ignore(1000, '\n');
	cin.clear();
	
	system("cls");
//	system("clear");
}