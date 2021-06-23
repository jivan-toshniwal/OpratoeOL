#include<iostream>
#include<vector>
#include "Mystring.h"

int main() {
	Mystring move;
	Mystring larry("Larry");
	Mystring stooge{"Stooge"};
	
	move.display();
	larry.display();
	stooge.display();

	move = larry + stooge;
	move.display();

	return 0;
}