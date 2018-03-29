#include "Fleet.hpp"

Fleet::Fleet() {
	
}

Fleet::Fleet(Arsenal& toCpy) {
	Arsenal arsenal(toCpy);
}

Fleet::~Fleet() {
//	cout << "Fleet destructor at work" << endl;
	unsigned int size = this->fleet.size();
	if(size) {
		for( unsigned int i = 0; i < size; i++ ) {
			cout << this->fleet[i]->getName() << "Fleet destroyed" << endl;
//			this->fleet[i]->~Unit();
			delete this->fleet[i];
		}
		this->fleet.clear();
	}
}

void Fleet::add(Unit* newUnit) {
	this->fleet.push_back(newUnit);
}



void Fleet::assignWeapon(Unit* unit, Combat* ship, Weapon* weapon) {
//	Unit* ptrU = getUnit(unit);
//	Weapon* ptrW = this->arsenal.getWeapon(weapon);
//	Ship* prtS = NULL;
//	
//	if(ptrU && ptrW) {
//		ptrS = ptrU->getShip(ship);
//		if(ptrS) {
//			if(ptrS->getCobatValue() != 0) {
//				ptrS->getWeapon(ptrW);
//				this->arsenal.erase(ptrW);
//			}
//		}
//	}
}

void Fleet::removeWeapon(unsigned int unit, unsigned int ship) {
	
}

Unit* Fleet::getUnit(unsigned int chosen) {
	
	unsigned int size;
	size = this->fleet.size();
	
	if(chosen<size) {
		return this->fleet[chosen-1];
	}
	else {
		cout << "Unit not found" << endl;
		return NULL;
	}
}

//Unit* Fleet::getUnit(string name) {
//	unsigned int size, i;
//	Unit* ptr = NULL;
//	size = this->fleet.size();
//	for(i = 0; i<size; i++) {
//		if(name == this->fleet[i]->getName()) {
//			ptr = this->fleet[i];
//			break;
//		}
//	}
//	if(!ptr) {
//		cout << "Unit not found" << endl;
//	}
//	return ptr;
//}

void Fleet::findBest(char criteria) {
	
	unsigned int i;
	unsigned int size = fleet.size();
	
	if(size) {
		Unit* temp = new Unit;
		if(tolower(criteria) == 'a') {
			for(i = 0; i<size; i++) {
				if(cmpVelocity(temp, fleet[i]))
					*temp = *fleet[i];
			}
		}
		else if(tolower(criteria) == 'b') {
			for(i = 0; i<size; i++) {
				if(cmpScope(temp, fleet[i]))
					*temp = *fleet[i];
			}
		}
		else if(tolower(criteria) == 'c') {
			for(i = 0; i<size; i++) {
				if(cmpDurability(temp, fleet[i]))
					*temp = *fleet[i];
			}
		}
		else if(tolower(criteria) == 'd') {
			for(i = 0; i<size; i++) {
				if(cmpCombatValue(temp, fleet[i]))
					*temp = *fleet[i];
			}
		}
		else if(tolower(criteria) == 'e') {
			for(i = 0; i<size; i++) {
				if(cmpCapacity(temp, fleet[i]))
					*temp = *fleet[i];
			}
		}
	temp->display();
	}
}


void Fleet::menu() {

	int margin = 5;
	int width = 30;

	
//	system("clear");
	system("cls");
	
	cout << endl
		<< setw(margin-2) << ' ' << setfill('*') << setw(width) << " " << "MENU" << " " << setw(width) << " " << setfill(' ') << endl
		<< setw(margin) << ' ' << "1) Zobacz swoja flote" << endl
		<< setw(margin) << ' ' << "2) Pokaz najlepsza jednostke" << endl
		<< setw(margin) << ' ' << "3) Edytuj jestnostke" << endl
		<< setw(margin-2) << ' ' << setfill('*') << setw(2*width + 6) << " " << setfill(' ') << endl
		<< setw(margin) << ' ' << " Podaj numer wybranej pozycji." << endl;
}

void Fleet::extendMenu(int i) {
	
	int margin = 5;
	int column = 12;
	
	cout << endl;
		if(i==1) {
			cout << setw(margin + 4) << ' ' << setw(column) << "A. Wyswietl jednostki"<< endl
				<< setw(margin + 4) << ' ' << setw(column) << "B. Wyswietl statki" << endl
				<< setw(margin + 4) << ' ' << setw(column) << "C. Wyswietl arsenal" << endl << endl;
		}
		if(i==2) {
			cout << setw(margin + 4) << ' ' << "Podaj kryterium:" << endl
				<< setw(margin + 4) << ' ' << "A. Predkosc" << endl
				<< setw(margin + 4) << ' ' << "B. Zasieg" << endl
				<< setw(margin + 4) << ' ' << "C. Wytrzymalosc" << endl
				<< setw(margin + 4) << ' ' << "D. Wartosc bojowa" << endl
				<< setw(margin + 4) << ' ' << "E. Ladunek" << endl << endl;
		}
		if(i==3) {
			cout << setw(margin + 4) << ' ' << "A. Przydziel bron" << endl
				<< setw(margin + 4) << ' ' << "B. Przydziel formacje" << endl << endl;
		}
//	cout << setw(margin) << ' ' << "3) Stworz statek" << endl;
//		if(i==3) {
//			cout << setw(margin + 4) << ' ' << "a) Standardowy" << endl
//				<< setw(margin + 4) << ' ' << "b) Bojowy" << endl
//				<< setw(margin + 4) << ' ' << "c) Transportowy" << endl << endl;
//		}
//	cout << setw(margin) << ' ' << "4) Stworz jednostke" << endl
	cout << endl << endl;
}

void Fleet::choose(int i, char b) {
	
<<<<<<< HEAD
	unsigned int unit;
=======
	unsigned int unit, ship;
>>>>>>> 56f329d215eb3524fa7508b847ad91c5d37e078a
	Unit* temp;
	
	unsigned int size = this->fleet.size();
	
		switch(i){
			case '1':
				if(tolower(b) == 'a') {
					for(unsigned int i = 0; i<size; i++) {
						cout << setw(3) << (i+1) << ". ";
						this->fleet[i]->display();
					}
					cout << endl;
				}
				else if(tolower(b) == 'b'){
					this->display();
				}
				else {
					this->myArsenal.display();
				}
				break;
			case '2':
				findBest(b);
				break;
			case '3':
				if(tolower(b) == 'a') {
					for(unsigned int i = 0; i<size; i++) {
						cout << setw(3) << (i+1) << ". ";
						this->fleet[i]->display();
					}
					cout << "     Wybierz jednostke" << endl << "     ";
					cin >> unit;
					while(!cin.good() || unit>= this->fleet.size()) {
						cin.clear();
						cin. ignore(1000, '\n');
						cin >> unit;
					}
					temp = getUnit(unit);
					temp->display();
					cout << endl << "     Wybierz statek bojowy" << endl << "     ";
						
				}
				else if(tolower(b) == 'b') {
					
				}
				break;
			case '4':
				break;
		}
		cin.clear();
//		}
//		else {
//			cin.ignore(1000, '\n');
//			cout << "Czy na pewno chcesz wyjsc?" << endl
//				<< setw(column) << "1 - TAK"
//				<< setw(column) << "0 - NIE" << endl;
//			cin >> exit;
//			while(!cin.good()) {
//				cin.clear();
//				cin.ignore(1000, '\n');
//				cin >> exit;
//			}
//		}
//	}
//	while(exit == false);
}

void Fleet::display() {
	
	cout.precision(2);
	cout << fixed;
	
	unsigned int size = fleet.size();
	for(unsigned int i = 0; i<size; i++) {
		fleet[i]->display();
		cout << endl;
		fleet[i]->displayMembers();
		cout << endl;
	}
}