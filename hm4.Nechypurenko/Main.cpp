#include <iostream>
#include <windows.h>

#include "Resident.h"
#include "Apartment.h"
#include "House.h"

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));

	const char** names = new const char* [40] { "���������", "�������", "����", "�����", "���������", "³����", "����", "�����", "����", "���", "������", "�����", "������", "�����", "������", "�����", "������", "�������", "����", "�������", "�����", "������", "�����", "������", "�������", "������", "������", "����", "³�����", "���", "��������", "����", "�����", "�������", "����", "������", "������", "��������", "˳��", "�����" };


	cout << "\n------------------original object------------------\n";
	House h(names);
	h.Print();

	Apartment::PrintCounter();
	Resident::PrintCounter();

	cout << "\n----------------object copy testing----------------\n";
	Resident r(names);
	Resident rCopy = r;

	Apartment a(names);
	Apartment aCopy = a;

	House hCopy = h;
	hCopy.Print();

	cout << "\n----------------operator = testing-----------------\n";
	Resident r2(names);
	r2 = rCopy;

	Apartment a2(names);
	a2 = aCopy;

	House h2(names);
	h2 = hCopy;
	hCopy.Print();

	delete[] names;

	return 0;
}