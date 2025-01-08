#include "Tel_book.h"
#include "iostream"

using namespace std;

Tel_book::Tel_book(int size)
{
	last_element = 0;
	this->size = size + 10;
	this->arr = new Abonent*[this->size];
}

void Tel_book::AddAbonent(Abonent* ab)
{
	if (size > last_element)
	{
		this->arr[last_element] = ab;
		last_element++;
	}
	else
	{
		size = size + 10;
		Abonent** arr2 = new Abonent * [size];
		for (int i = 0; i <= size; i++)
		{
			arr2[i] = arr[i];
		}
		this->arr = arr2;
		this->arr[last_element] = ab;
		last_element++;
	}
}

void Tel_book::DeleteAbonent()
{
	this->arr[last_element-1] = nullptr;
}

Abonent* Tel_book::FindAbonentBySn(char* sn2)
{
	int temp = 0; // to know how many symbols are same
	int temp2 = 0;
	for (int i = 0; i < last_element; i++)
	{
		temp = strlen(sn2);
		char* sn1 = arr[i]->getSn();
		for (int j = 0; j <= strlen(sn2); j++)
		{
			if (sn1[j] != sn2[j])
			{
				break;
			}
			else
			{
				temp2++;
			}
		}
		if (temp == temp2)
		{
			return arr[i];
		}
		else
		{
			temp2 = 0;
		}
	}
}

void Tel_book::ShowAllAbonents()
{
	for (int i = 0; i < last_element; i++)
	{
		arr[i]->printAbonent();
		cout << endl;
	}
}

Tel_book::~Tel_book()
{
	if (arr != nullptr)
	{
		delete[] arr;
	}
}
