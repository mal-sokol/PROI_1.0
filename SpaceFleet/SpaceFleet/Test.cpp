#include "Test.hpp"

Test::Test()
{
}

Test::~Test()
{
}

int Test::test7() {
	
	Fleet testFleet;
	testFleet.display();
	
	if(testFleet.getArsenal() == NULL) {
		return 1;
	}
	
	return 0;
}