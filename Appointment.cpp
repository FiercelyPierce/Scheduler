#include "Appointment.h"

Appointment::Appointment()
{
	Name = "";
	Description = "";
}

Appointment::Appointment(string name, float description)
{
	Name = name;
	Description = description;
}

void Appointment::setName(string name)
{
	Name = name;
}

string Appointment::getnName()
{
	return Name;
}

void Appointment::setDescription(string description)
{
	Description = description;
}

string Appointment::getDescription()
{
	return Description;
}

void Appointment::toString()
{
	cout << "\nYour event is currently saved as: ";
	cout << "\nEvent: " + Name;
	cout << "\nDescription: " + Description << endl;
}
