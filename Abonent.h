#pragma once
#include "Date.h"

class Abonent
{
private:
	char* sn;
	const long long phone;
	Date born;
	static int num_abonent;
public:
	void setNumAbonent();
	char* getSn() const;
	const long long getPhone() const;
	void getDate() const;

	Abonent(char* sn, const long long phone1, int day, int month, int year);
	Abonent(char* sn, const long long phone1);
	Abonent(const Abonent& ab) = delete;
	Abonent();

	void printAbonent();
	
	~Abonent();

};

