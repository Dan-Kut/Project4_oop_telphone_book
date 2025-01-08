#include "Abonent.h"
#include "iostream"

using namespace std;

int Abonent::num_abonent = 0;

void Abonent::setNumAbonent()
{
	num_abonent++;
}

char* Abonent::getSn() const
{
	return this->sn;
}

const long long Abonent::getPhone() const
{
	return this->phone;
}

void Abonent::getDate() const
{
	Date d = this->born;
	d.printDate();
}

Abonent::Abonent(char* sn, const long long phone1, int day, int month, int year):phone(phone1),born(day,month,year)
{
	if (sn != nullptr)
	{
		int size = strlen(sn);
		this->sn = new char[size + 1];
		strcpy_s(this->sn, size + 1, sn);
	}
	else
	{
		this->sn = nullptr;
	}
	setNumAbonent();
}
Abonent::Abonent(char* sn, const long long phone1):Abonent(sn, phone1, 10, 10, 2000)
{
}

Abonent::Abonent():phone(0),born(0,0,0)
{
	sn = nullptr;
	num_abonent++;
}

void Abonent::printAbonent()
{
	cout << "Name: ";
	for (int i = 0; i <= strlen(this->sn); i++)
	{
		cout << this->sn[i];
	}
	cout << endl;
	cout << "phone: " << this->phone << endl;
	cout << "date of born: ";
	this->born.printDate();
	cout << endl;
}

Abonent::~Abonent()
{
	if (sn != nullptr)
	{
		sn = nullptr;
	}
}