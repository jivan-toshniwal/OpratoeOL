#include "Mystring.h"
#include <iostream>

// No-args constructor
Mystring::Mystring()
	:str{ nullptr } {
	str = new char[1];
	*str = '\0';
}

// overloaded constructor
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

// copy constructor
Mystring::Mystring(const Mystring& source)
	:Mystring(source.str) {
	std::cout << "Copy constructor used\n";
}
// destructor
Mystring::~Mystring() {
	delete[] str;
}

// copy assignment
Mystring& Mystring::operator=(const Mystring& rhs) {
	if (str == rhs.str) {
		return *this;
	}
	delete[] str;
	int x = std::strlen(rhs.str) + 1;
	str = new char[x];
	strcpy_s(str, x, rhs.str);
	return *this;
}

// move assignment
Mystring& Mystring::operator=(Mystring&& rhs) {
	std::cout << "Using move assigment\n";
	if (str == rhs.str) {
		return *this;
	}
	delete[] str;
	str = rhs.str;
	rhs.str = nullptr;
	return *this;
}

// concatenate assignment
Mystring Mystring::operator+(const Mystring& rhs) const {
	int x = std::strlen(str) + std::strlen(rhs.str) + 1;
	char* buff = new char[x];
	strcpy_s(buff, x, str);
	strcat_s(buff, x, rhs.str);
	Mystring temp{ buff };
	delete[] buff;
	return temp;
}

// make lowrecase 
Mystring Mystring::operator-() const {
	int x = std::strlen(str) + 1;
	char* buff = new char[x];
	strcpy_s(buff, x, str);
	for (size_t i = 0; i<std::strlen(buff); i++) {
		buff[i] = std::tolower(buff[i]);
	}
	Mystring temp{ buff };
	delete[] buff;
	return temp;
}

// is_equal
bool Mystring::operator==(const Mystring& rhs) const {
	return (std::strcmp(str, rhs.str) == 0);
}

//  Print str and lenght
void Mystring::display() const {
	std::cout << str << " : " << get_length() << std::endl;
}


int Mystring::get_length() const {
	return std::strlen(str);
}
const char* Mystring::get_str() const {
	return str;
}