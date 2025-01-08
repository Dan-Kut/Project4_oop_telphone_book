#pragma once
#include "Date.h"
#include "Abonent.h"
#include "iostream"

using namespace std;

class Tel_book
{
private:
	Abonent** arr;
	int size;
	int last_element;
public:
	Tel_book(int size);

	void AddAbonent(Abonent* ab); // add to the end of the arr 
	void DeleteAbonent(); // delete the last element
	Abonent* FindAbonentBySn(char* sn2);
	void ShowAllAbonents();

	~Tel_book();
};

