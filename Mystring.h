#pragma once
#include<string>
class Mystring{
	char* str;

public:
	Mystring()
		:str(nullptr){
		str = new char[1];
		*str = '\0';
	}
	Mystring(const char*);
	~Mystring() {
		delete[] str;
	}
	bool operator==(const Mystring& rhs);
	bool operator!=(const Mystring& rhs);

	Mystring& operator=(const Mystring& rhs);
	Mystring& operator=(Mystring&& rhs);

	bool operator<(const Mystring& rhs);
	bool operator>(const Mystring& rhs);

	Mystring operator-() const;

	Mystring(const Mystring& s);
	Mystring(Mystring&& s);

	friend std::ostream& operator<<(std::ostream& os, const Mystring& rhs);
	Mystring operator+(const Mystring& rhs);
	Mystring& operator+=(const Mystring& rhs);
	Mystring operator*(int x);
	//Mystring operator*=(int a);
	friend Mystring& operator*=(Mystring& lhs, const int a);
	Mystring operator++() const;
	Mystring operator++(int);



	const char* get_str() const { return str; }
};

