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
		<< setw(margin-2) << ' ' << right << setfill('*') << setw(width) << " " << "WITAJ" << left << setw(width) << " " << setfill(' ') << endl << endl
		<< setw(margin+6) << ' ' << "Stworz flote pozaziemskich statkow kosmicznych"<< endl << endl 
		<< setw(margin-2) << ' ' << setfill('*') << setw(2*width + 6) << " " << setfill(' ') << endl
		<< setw(margin) << ' ' << "kliknij c, aby kontynuowac      q - wyjscie z programu" << endl;
}

void Menu::howManyUnits() {
	
	cout << endl
		<< setw(margin) << ' ' << "Ile jednostek we flocie?" << setw(margin) << ' ' ;
}

void Menu::howManyWeapons() {
	
	cout << endl
		<< setw(margin) << ' ' << "Ile elementow broni chcesz stworzyc?" << setw(margin) << ' ' ;
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
		<< setw(margin-2) << ' ' << right << setfill('*') << setw(width-8) << " " << "W TRAKCIE TWORZENIA" << left << setw(width-8) << " " << setfill(' ') << endl << endl
		<< setw(margin+10) << ' ' << i+1 << ". Statku jednoski "<< name << endl << endl
		<< setw(margin-2) << ' ' << setfill('*') << setw(2*width + 6) << " " << setfill(' ') << endl << endl
		<< setw(margin);
}


void Menu::instructions() {
	
//	system("clear");
	system("cls");
	
	cout << endl
		<< setw(margin-2) << ' ' << right << setfill('*') << setw(width-10) << " " << "UDALO SIE STWORZYC FLOTE" << left << setw(width-10) << " " << setfill(' ') << endl << endl
		<< setw(margin+5) << ' ' << "Parametry statkow zostaly przypisane losowo."<< endl
		<< setw(margin+5) << ' ' << "Mozesz modyfikowac je dodajac bron z arsenalu do" << endl
		<< setw(margin+5) << ' ' << "statkow bojowych lub dolaczajac statki do formacji." << endl
		<< setw(margin+5) << ' ' << "Twoj arsenal jest jeszcze pusty."<< endl << endl;
}

void Menu::formations() {
	
//	system("clear");
	system("cls");
	
	cout << endl
		<< setw(margin-2) << ' ' << right << setfill('*') << setw(width-6) << " " << "DOSTEPNE FORMACJE" << left << setw(width-7) << " " << setfill(' ') << endl << endl
		<< setw(margin+5) << ' ' << "1) LINE - pozwala zoptymalizowac predkosc jednostki"<< endl
		<< setw(margin+5) << ' ' << "2) MATRIX - optymalizuje zasieg " << endl
		<< setw(margin+5) << ' ' << "3) SPEARE - optymalizuje wartosc bojowa jednostki" << endl
		<< setw(margin+5) << ' ' << "4) CUBE - optymalizuje wytrzymalosc"<< endl << endl
		<< setw(margin-2) << ' ' << setfill('*') << setw(2*width + 6) << " " << setfill(' ') << endl
		<< setw(margin) << ' ' << "Wplyw formacji na jednostke moze zalezec od ilosci statkow w danej formacji" << endl
		<< setw(margin) << ' ' << "Optymalizacja jednego moze odbywac sie kosztem innych parametrow jednostki." << endl
		<< setw(margin-2) << ' ' << setfill('*') << setw(2*width + 6) << " " << setfill(' ') << endl << endl
		<< setw(margin) << ' ' << " Podaj numer wybranej pozycji (lub 0, aby usunac statek z formacji)." << endl
		<< setw(margin-2) << ' ';
}

void Menu::main(bool hasArsenal) {
	
	cout << endl
		<< setw(margin-2) << ' ' << right << setfill('*') << setw(width) << " " << "MENU" << left << setw(width) << " " << setfill(' ') << endl << endl
		<< setw(margin) << ' ' << "1) Zobacz swoja flote" << endl
		<< setw(margin) << ' ' << "2) Dodaj bron do arsenalu" << endl
		<< setw(margin) << ' ' << "3) Ustaw w formacje" << endl
		<< setw(margin) << ' ' << "4) Pokaz najlepsza jednostke" << endl;
		
		if(hasArsenal) {
			cout << setw(margin) << ' ' << "5) Przydziel bron do statku" << endl;
		}
		
	cout << endl
		<< setw(margin-2) << ' ' << setfill('*') << setw(2*width + 6) << " " << setfill(' ') << endl
		<< setw(margin) << ' ' << " Podaj numer wybranej pozycji." << endl
		<< setw(margin-2) << ' ';
}


void Menu::criteria() {
	cout << endl 
		<< setw(margin + 4) << ' ' << "Podaj kryterium:" << endl
		<< setw(margin + 4) << ' ' << "A. Predkosc" << endl
		<< setw(margin + 4) << ' ' << "B. Zasieg" << endl
		<< setw(margin + 4) << ' ' << "C. Wytrzymalosc" << endl
		<< setw(margin + 4) << ' ' << "D. Wartosc bojowa" << endl
		<< setw(margin + 4) << ' ' << "E. Ladunek" << endl << endl;
}
