#include "Menu.hpp"

Menu::Menu(const int MARGIN, const int WIDTH, const int COLUMN) : margin(MARGIN), width(WIDTH), column(COLUMN) {
}

Menu::~Menu() {
}

void Menu::start() {
	
//	int margin = 5;
//	int width =30;
//	int column = 25;
	
	cout << endl
		<< setw(margin-2) << ' ' << setfill('*') << setw(width) << " " << "WITAJ" << " " << setw(width) << " " << setfill(' ') << endl << endl
		<< setw(margin+6) << ' ' << "Stworz flote pozaziemskich statkow kosmicznych"<< endl << endl 
		<< setw(margin-2) << ' ' << setfill('*') << setw(2*width + 6) << " " << setfill(' ') << endl
		<< setw(margin) << ' ' << "kliknij c, aby kontynuowac      q - wyjscie z programu" << endl;
}

void Menu::howManyUnits() {
	
	cout << endl
		<< setw(margin) << ' ' << "Ile jednostek we flocie?" << setw(margin) << ' ' ;
}

void Menu::whichShipType() {
	cout << endl
		<< setw(margin+5) << ' ' << "Jaki statek chcesz dodac?" << endl << left
		<< setw(margin+5) << ' ' << "a) standardowy" << endl
		<< setw(margin+5) << ' ' <<"b) bojowy" << endl
		<< setw(margin+5) << ' ' <<"c) transportwy" << endl
		<< setw(margin+5) << ' ';
}

void Menu::inProgress(unsigned int i, string name) {
	
//	system("clear");
	system("cls");
	
	cout << endl
		<< setw(margin-2) << ' ' << setfill('*') << setw(width-8) << " " << "W TRAKCIE TWORZENIA" << " " << setw(width-8) << "*" << setfill(' ') << endl << endl
		<< setw(margin+10) << ' ' << i+1 << ". Statku jednoski "<< name << endl << endl
		<< setw(margin-2) << ' ' << setfill('*') << setw(2*width + 6) << " " << setfill(' ') << endl << endl
		<< setw(margin);
}


void Menu::instructions() {
	
//	system("clear");
	system("cls");
	
	cout << endl
		<< setw(margin-2) << ' ' << setfill('*') << setw(width-10) << " " << "UDALO SIE STWORZYC FLOTE" << " " << setw(width-10) << "*" << setfill(' ') << endl << endl
		<< setw(margin+5) << ' ' << "Parametry statkow zostaly przypisane losowo."<< endl
		<< setw(margin+5) << ' ' << "Mozesz modyfikowac je dodajac bron z arsenalu do" << endl
		<< setw(margin+5) << ' ' << "statkow bojowych lub dolaczajac statki do formacji." << endl
		<< setw(margin+5) << ' ' << "Twoj arsenal jest jeszcze pusty."<< endl << endl;
//		<< setw(margin-2) << ' ' << setfill('*') << setw(2*width + 6) << " " << setfill(' ') << endl << endl
//		<< setw(margin);
}

void Menu::main() {
	
	cout << endl
		<< setw(margin-2) << ' ' << setfill('*') << setw(width) << " " << "MENU" << " " << setw(width) << " " << setfill(' ') << endl
		<< setw(margin) << ' ' << "1) Zobacz swoja flote" << endl
		<< setw(margin) << ' ' << "2) Dodaj bron do arsenalu" << endl
		<< setw(margin) << ' ' << "3) Ustaw w formacje" << endl
		<< setw(margin) << ' ' << "4) Pokaz najlepsza jednostke" << endl
		<< setw(margin-2) << ' ' << setfill('*') << setw(2*width + 6) << " " << setfill(' ') << endl
		<< setw(margin) << ' ' << " Podaj numer wybranej pozycji." << endl;
}

void Menu::extendMain(int option) {
	
	//	system("clear");
	system("cls");
	
	cout << endl
		<< setw(margin-2) << ' ' << setfill('*') << setw(width) << " " << "MENU" << " " << setw(width) << " " << setfill(' ') << endl << endl;
		if(option==1) {
			cout << setw(margin + 4) << ' ' << setw(column) << "A. Wyswietl jednostki"<< endl
				<< setw(margin + 4) << ' ' << setw(column) << "B. Wyswietl statki" << endl
				<< setw(margin + 4) << ' ' << setw(column) << "C. Wyswietl arsenal" << endl << endl;
		}
		if(option==2) {
			cout << setw(margin + 4) << ' ' << "Podaj kryterium:" << endl
				<< setw(margin + 4) << ' ' << "A. Predkosc" << endl
				<< setw(margin + 4) << ' ' << "B. Zasieg" << endl
				<< setw(margin + 4) << ' ' << "C. Wytrzymalosc" << endl
				<< setw(margin + 4) << ' ' << "D. Wartosc bojowa" << endl
				<< setw(margin + 4) << ' ' << "E. Ladunek" << endl << endl;
		}
		if(option==3) {
			cout << setw(margin + 4) << ' ' << "A. Przydziel bron" << endl
				<< setw(margin + 4) << ' ' << "B. Przydziel formacje" << endl;
		}
	cout << endl << endl;
	
		cout << setw(margin-2) << ' ' << setfill('*') << setw(2*width + 6) << " " << setfill(' ') << endl << endl
		<< setw(margin);
}


//void Menu::choose(Fleet& myFleet, int option) {
//	
//	unsigned int unit;
//
//	Unit* temp;
//	
//	unsigned int size = this->fleet.size();
//	
//		switch(i){
//			case '1':
//				if(tolower(b) == 'a') {
//					for(unsigned int i = 0; i<size; i++) {
//						cout << setw(3) << (i+1) << ". ";
//						this->fleet[i]->display();
//					}
//					cout << endl;
//				}
//				else if(tolower(b) == 'b'){
//					this->display();
//				}
//				else {
//					this->myArsenal.display();
//				}
//				break;
//			case '2':
//				findBest(b);
//				break;
//			case '3':
//				if(tolower(b) == 'a') {
//					for(unsigned int i = 0; i<size; i++) {
//						cout << setw(3) << (i+1) << ". ";
//						this->fleet[i]->display();
//					}
//					cout << "     Wybierz jednostke" << endl << "     ";
//					cin >> unit;
//					while(!cin.good() || unit>= this->fleet.size()) {
//						cin.clear();
//						cin. ignore(1000, '\n');
//						cin >> unit;
//					}
//					temp = getUnit(unit);
//					temp->display();
//					cout << endl << "     Wybierz statek bojowy" << endl << "     ";
//						
//				}
//				else if(tolower(b) == 'b') {
//					
//				}
//				break;
//			case '4':
//				break;
//		}
//		cin.clear();
//}