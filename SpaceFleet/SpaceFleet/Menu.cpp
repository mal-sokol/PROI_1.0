#include "Menu.hpp"

Menu::Menu(const int MARGIN, const int WIDTH, const int COLUMN) : margin(MARGIN), width(WIDTH), column(COLUMN) {
}

Menu::~Menu() {
}

void Menu::hello() {
	
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

void Menu::header(unsigned int i, string name) {
	
//	int margin = 5;
//	int width =30;
//	int column = 25;
	
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
//	system("cls");
	
	cout << endl
		<< setw(margin-2) << ' ' << setfill('*') << setw(width-10) << " " << "UDALO SIE STWORZYC FLOTE" << " " << setw(width-10) << "*" << setfill(' ') << endl << endl
		<< setw(margin+5) << ' ' << "Parametry statkow zostaly przypisane losowo."<< endl
		<< setw(margin+5) << ' ' << "Mozesz zmodyfikowac je dodajac bron z arsenalu do" << endl
		<< setw(margin+5) << ' ' << "statkow bojowych lub dolaczajac statki do formacji." << endl
		<< setw(margin+5) << ' ' << "Oto twoj arsenal :"<< endl << endl
		<< setw(margin-2) << ' ' << setfill('*') << setw(2*width + 6) << " " << setfill(' ') << endl << endl
		<< setw(margin);
}
