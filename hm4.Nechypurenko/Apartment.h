#pragma once
#include "Resident.h"

class Apartment {

	Resident** residents;
	int size;

	static int counter;

public:
	explicit Apartment(const char** names);

	Apartment(const Apartment& object);

	~Apartment();

	void PrintResidents() const;

	static int GetCounter();
	static void PrintCounter();
};