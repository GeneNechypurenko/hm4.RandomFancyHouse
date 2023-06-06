#pragma once
#include "Apartment.h"
#include "Resident.h"

class House {

	Apartment** apartments;
	int size;

public:
	explicit House(const char** names);

	House(const House& object);

	~House();

	void Print() const;
};