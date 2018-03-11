#include <iostream>
#include <string>
#include "Ship.hpp"

using namespace std;

int main(int argc, char **argv)
{
	cout << "hello world" << endl;
	
	Ship XR027("XR027", 300, 120, 70);
	XR027.getInfo();
	return 0;
}
