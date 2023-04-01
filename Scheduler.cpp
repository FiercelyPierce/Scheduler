#include <iostream>
#include <algorithm>
#include <string>
#include "Appointment.h"

int main()
{
    Appointment newSchedule;
    string name;
    string description;
    string resume;

    cout << "Welcome to the Appointment Scheduler app!\n";

    do 
    { 
        // Creates new event
        cout << "Name your event\n";
        getline(cin, name);
        cout << "Add a discription\n";
        getline(cin, description);

        newSchedule.setName(name);
        newSchedule.setDescription(description);
        newSchedule.toString();

        cout << "Would you like to make another event? (Y/N) ";

        getline(cin, resume);
        // Saves the input string as uppercase
        std::transform(resume.begin(), resume.end(), resume.begin(), ::toupper);

    // Keeps running till the user types no
    } while (resume != "N");


}
