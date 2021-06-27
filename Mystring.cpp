#include "Mystring.h"
#include <iostream>
#include<string>

Mystring::Mystring(const char* s)
	:str(nullptr){
	if (s == nullptr) {
		str = new char[1];
		*str = '\0';
	}
	else {
		int x = std::strlen(s) + 1;
		str = new char[x];
		strcpy_s(str, x, s);
	}
	//std::cout << "One-arg constructor called!\n";
}


bool Mystring::operator==(const Mystring& rhs) {
	return (std::strcmp(this->str, rhs.str) == 0);
}

bool Mystring::operator!=(const Mystring& rhs) {
	return !(std::strcmp(this->str, rhs.str) == 0);
}

Mystring& Mystring::operator=(const Mystring& rhs) {
	//std::cout << "Copy assignment called!\n";
	if (this->str == rhs.str) return *this;
	else {
		int x = strlen(rhs.str) + 1;
		delete[] str;
		str = new char[x];
		strcpy_s(str, x, rhs.str);
		return *this;
	}
}

Mystring& Mystring::operator=(Mystring&& rhs) {
	//std::cout << "Move assignment called!\n";
	if (this->str == rhs.str) return *this;
	int x = strlen(rhs.str) + 1;
	delete[] str;
	str = rhs.str;
	rhs.str = nullptr;
	return *this;
}


bool Mystring::operator<(const Mystring& rhs) {
	return(strcmp(str, rhs.str) < 0);
}
bool Mystring::operator>(const Mystring& rhs) {
	return(strcmp(str, rhs.str) > 0);
}

Mystring::Mystring(const Mystring& s)
	:Mystring(s.str) {
	//std::cout << "Copy constructor called!\n";
}

Mystring::Mystring(Mystring&& s) {
	//std::cout << "Move constructor called!\n";
	str = s.str;
	s.str = nullptr;
}

Mystring Mystring::operator-() const{
	for (int i = 0; i < strlen(str); i++)
		str[i] = tolower(str[i]);
	Mystring temp{ str };
	return temp;
}

std::ostream& operator<<(std::ostream& os, const Mystring& rhs) {
	os << rhs.str;
	return os;
}

Mystring Mystring::operator+(const Mystring& rhs) {
	int x = std::strlen(this->str) + std::strlen(rhs.str) + 1;
	char* buff = new char[x];
	strcpy_s(buff, x, this->str);
	strcat_s(buff, x, rhs.str);
	Mystring temp{ buff };
	delete[] buff;
	return temp;
}

Mystring& Mystring::operator+=(const Mystring& rhs) {
	*this = *this + rhs;
	return *this;
}

Mystring Mystring::operator*(int a) {
	int x = (strlen(this->str) * a) + 1;
	char* buff = new char[x];
	strcpy_s(buff, x, this->str);
	for (int i = 1; i < a; i++) {
		strcat_s(buff, x, this->str);
	}
	Mystring temp{ buff };
	delete[] buff;
	return temp;
}

//Mystring Mystring::operator*=(int a) {
//	*this = *this * a;
//	return *this;
//}

Mystring& operator*=(Mystring& lhs, const int a) {
	lhs = lhs * a;
	return lhs;
}

Mystring Mystring::operator++() const{
	for (int i = 0; i < strlen(str); i++)
		str[i] = toupper(str[i]);
	Mystring temp{ str };
	return temp;
}

Mystring Mystring::operator++(int){
	Mystring temp{ str };
	for (int i = 0; i < strlen(str); i++)
		str[i] = toupper(str[i]);
	return temp;
}
