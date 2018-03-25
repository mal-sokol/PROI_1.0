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
