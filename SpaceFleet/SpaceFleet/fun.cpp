//Niezalezne funkcje
#include <iostream>
#include <string>
using namespace std;

string shipFlex(int num) { //Odmiana slowa statek
	string word;
	
	if(num == 1)
		word = "statek";
	else if(num%10 == 2 || num%10 == 3 || num%10 == 4)
		word = "statki";
	else word = "statkow";
	
	return word;
}

string spacing(int length, int total) { //Zwraca odpowiednia liczbe spacji do kolumnu tabeli o szerokosci total
	
	int i;
	int left = total - length;
	string spacing;
	
	for(i=0; i<left; spacing = spacing + " ", i++);
	
	return spacing;
}

int numLength(int number) { //Zwraca ilosc cyfr liczby
	
	int n = 0;
	
	if(number<0)
		n++;
	
	while((number) != 0) {
		n++;
		number = (int)(number*0.1);
	}

	return n;
}