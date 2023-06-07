#include "Resident.h"

int Resident::counter = 0;

Resident::Resident(const char** names) {

    int min = 0, max = 39;
    int index = min + rand() % (max - min + 1);

    int length = strlen(names[index]);
    name = new char[length + 1];
    strcpy_s(name, length + 1, names[index]);

    counter++;
}

Resident::Resident(const Resident& object)
{

    int length = strlen(object.name);
    name = new char[length + 1];
    strcpy_s(name, length + 1, object.name);

    counter++;
}

Resident::~Resident() {

    delete[] name;
    counter--;
}

Resident& Resident::operator=(const Resident& object)    {

    if (this != &object)    {

        delete[] name;

        int length = strlen(object.name) + 1;
        name = new char[length];
        strcpy_s(name, length, object.name);
    }
    return *this;
}

const char* Resident::GetName() const {

    return name;
}

int Resident::GetCounter() {

    return counter;
}

void Resident::PrintCounter() {

    cout << "В будинку проживає " << Resident::GetCounter() << " мешканців" << endl;
}
