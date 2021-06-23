#include "Mystring.h"
#include <iostream>

Mystring::Mystring() 
	:str(nullptr){
	str = new char[1];
	*str = '\0';
}

Mystring::Mystring(const char* s)
	:str{ nullptr } {
	if (s == nullptr) {
		str = new char[1];
		*str = '\0';
	}
	else {
		int x = std::strlen(s) + 1;
		str = new char[x];
		strcpy_s(str, x, s);
	}
}

Mystring::Mystring(const Mystring& source)
	:Mystring(source.str) {
	std::cout << "Copy constructor called\n";
}

Mystring& Mystring::operator=(const Mystring &rhs){
	if (this == &rhs) {
		return *this;
	}
	delete[] str;
	int x = std::strlen(rhs.str) + 1;
	str = new char[x];
	strcpy_s(str, x, rhs.str);
	return *this;
}

Mystring Mystring::operator+(const Mystring& rhs) {
	int x = std::strlen(rhs.str) + std::strlen(str) + 1;
	char* buff = new char[x];
	strcpy_s(buff, x, str);
	strcat_s(buff, x, rhs.str);
	Mystring temp{ buff };
	delete[] buff;
	return temp;
}

Mystring::~Mystring() {
	std::cout << "Destructor is called for " << str << std::endl;
	delete[] str;
}
void Mystring::display() const {
	std::cout << str << " : " << get_length() << std::endl;
}
int Mystring::get_length() const {
	return std::strlen(str);
}
const char* Mystring::get_str() const {
	return str;
}