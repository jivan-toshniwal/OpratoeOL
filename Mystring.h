#pragma once
class Mystring{
	char* str;
public:
	Mystring(); // no-org constructor
	Mystring(const char* s); // overloaded constructor
	Mystring(const Mystring& source); // copy constructor
	~Mystring(); // destructor
	Mystring& operator=(const Mystring& rhs); // copy assignment
	Mystring& operator=(Mystring&& rhs); // move assignment
	Mystring operator+(const Mystring& rhs) const; // concatenate
	Mystring operator-() const; // make lowrecase 
	bool operator==(const Mystring& rhs) const; // is_equal
	void display() const; //  Print str and lenght
	int get_length() const;
	const char* get_str() const;
};

