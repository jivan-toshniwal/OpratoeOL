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

	Mystring repeat_string;
	int repeat_time;
	std::cout << "Enter a string to repeat: " << std::endl;
	std::cin >> repeat_string;

	//std::cout << repeat_string << std::endl;
	std::cout << "How many times woud you like to repeated it? \n";
	std::cin >> repeat_time;

	repeat_string *= repeat_time;

	std::cout << "The resulting string is: " << repeat_string << std::endl;

	std::cout << (repeat_string * 12) << std::endl;

	repeat_string = "RepeatMe";
	std::cout << (repeat_string + repeat_string + repeat_string) << std::endl;

	repeat_string += (repeat_string * 3);
	std::cout << repeat_string << std::endl;

	repeat_string = "RepeatMe";
	repeat_string += (repeat_string + repeat_string + repeat_string);

	std::cin.get();
	return 0;
}