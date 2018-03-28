#include "Menu.hpp"

Menu::Menu() {
	
}

Menu::~Menu() {
	
}

void Menu::display() {
	
	const int margin = 5;
	const int width = 30;
	
//	system("clear");
	system("cls");
	
	cout << endl
		<< setw(margin-2) << ' ' << setfill('*') << setw(width) << " " << "MENU" << " " << setw(width) << " " << setfill(' ') << endl
		<< setw(margin) << ' ' << "1) Zobacz swoja flote" << endl
		<< setw(margin) << ' ' << "2) Pokaz najlepsza jednostke" << endl
		<< setw(margin) << ' ' << "3) Zobacz swoj arsenal" << endl
		<< setw(margin) << ' ' << "4) Stworz statek" << endl
		<< setw(margin) << ' ' << "5) Stworz jednostke" << endl
		<< setw(margin-2) << ' ' << setfill('*') << setw(2*width + 6) << " " << setfill(' ') << endl
		<< setw(margin) << ' ' << "Podaj numer wybranej pozycji lub k, aby zakonczyc program." << endl;
}
