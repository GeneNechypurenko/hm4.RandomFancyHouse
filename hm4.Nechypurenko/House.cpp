#include "House.h"

House::House(const char** names) {

	int min = 5, max = 12;
	size = min + rand() % (max - min + 1);

	apartments = new Apartment*[size];

	for (int i = 0; i < size; i++)
		apartments[i] = new Apartment(names);
}

House::House(const House& object) {

	apartments = new Apartment * [object.size];
	size = object.size;

	for (int i = 0; i < size; i++)
		apartments[i] = new Apartment(*object.apartments[i]);
}

House::~House() {

	for (int i = 0; i < size; i++) 
		delete apartments[i];
	delete[] apartments;
}

void House::Print() const {

	for (int i = 0; i < size; i++) {

		cout << "квартира " << i + 1 << endl;
		apartments[i]->PrintResidents();
	}
}