#pragma once
#include <iostream>

using namespace std;

class Resident {

	char* name;

	static int counter;

public:
	explicit Resident(const char** names);

	Resident(const Resident& object);

	~Resident();

	Resident& operator=(const Resident& object);

	const char* GetName() const;

	static int GetCounter();
	static void PrintCounter();
};