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
	char* getSn();
	void setSn(char*);
	const long long getPhone();


};
int Abonent::num_abonent = 0;

