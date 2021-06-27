#include<iostream>
#include "Mystring.h"

int main() {
	std::cout << std::boolalpha << std:: endl;

	Mystring a{ "frank" };
	Mystring b("frank");

	std::cout << (a == b) << std::endl;
	std::cout << (a != b) << std::endl;

	b = "goerge";
	//std::cout << b.get_str();
	std::cout << (a == b) << std::endl;
	std::cout << (a != b) << std::endl;
	std::cout << (a < b) << std::endl;
	std::cout << (a > b) << std::endl;

	Mystring s1{ "FRANK" };
	std::cout << s1 << std::endl;
	s1 = -s1;
	std::cout << s1 << std::endl;

	s1 = s1 + "*****";
	std::cout << s1 << std::endl;

	s1 += "-----";
	std::cout << s1 << std::endl;

	Mystring s2{ "12345" };
	s1 = s2 * 3;
	std::cout << s1 << std::endl;

	Mystring s3{ "abcdef" };
	s3 *= 5;
	std::cout << s3 << std::endl;

	Mystring s = "Frank";
	++s;
	std::cout << s << std::endl;
	s = -s;
	std::cout << s << std::endl;

	Mystring result;
	result = ++s;
	std::cout << s << std::endl;
	std::cout << result << std::endl;
	s = "Frank";
	s++;
	std::cout << s << std::endl;

	s = -s;
	std::cout << s << std::endl;
	result = s++;
	std::cout << s << std::endl;
	std::cout << result << std::endl;

	std::cin.get();
	return 0;
}