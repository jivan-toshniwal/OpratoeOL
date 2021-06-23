#include<iostream>
#include<vector>
#include "Mystring.h"

int main() {
	std::cout << std::boolalpha << std::endl;

	Mystring larry{ "LARRY" };
	Mystring moe{ "Moe" };
	Mystring stooge = larry;
	larry.display();
	moe.display();
	std::cout << (larry == moe) << std::endl;
	std::cout << (larry == stooge) << std::endl;
	Mystring larry2 = -larry;
	larry2.display();
	Mystring stooges = stooge + "larry" + moe; // compilar error
	stooges.display();
	Mystring two_stooges = moe + " " + "larry";
	two_stooges.display();
	Mystring three_stooges = moe + " " + larry + " " + stooge;
	three_stooges.display();


	return 0;
}