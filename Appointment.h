#include <iostream>
#include <string>

using namespace std;

class Appointment
{
private:
	// Private attributes
	string Name;
	string Description;


public:
	// Constructor
	Appointment();

	// Parameterized Constructor
	Appointment(string name, float description);

	// Setter
	void setName(string name);

	// Getter
	string getnName();

	// Setter
	void setDescription(string description);

	// Getter
	string getDescription();

	void toString();
};