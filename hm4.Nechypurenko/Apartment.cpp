#include "Apartment.h"

int Apartment::counter = 0;

Apartment::Apartment(const char** names) {

	int min = 0, max = 7;
	size = min + rand() % (max - min + 1);

	residents = new Resident * [size];

	for (int i = 0; i < size; i++)
		residents[i] = new Resident(names);

	counter++;
}

Apartment::Apartment(const Apartment& object) {

	residents = new Resident * [object.size];
	size = object.size;

	for (int i = 0; i < size; i++)
		residents[i] = new Resident(*object.residents[i]);

	counter++;
}

Apartment::~Apartment() {

	for (int i = 0; i < size; i++)
		delete residents[i];
	delete[] residents;

	counter--;
}

int Apartment::GetCounter() {

	return counter;
}

void Apartment::PrintResidents() const {

	for (int i = 0; i < size; i++)
			cout << residents[i]->GetName() << endl;
	cout << endl;
}

void Apartment::PrintCounter() {

	cout << "Будинок містить " << Apartment::GetCounter() << " квартир" << endl;
}