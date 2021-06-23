#pragma once
class Mystring{
	char* str;
public:
	Mystring();
	Mystring(const char* s);
	Mystring(const Mystring& source);
	~Mystring();
	Mystring& operator=(const Mystring& rhs);
	Mystring operator+(const Mystring& rhs);
	void display() const;
	int get_length() const;
	const char* get_str() const;
	void set_name(const char* a);
};

