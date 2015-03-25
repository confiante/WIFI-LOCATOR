//LOCATIONS.h
//WIFI LOCATOR
//FUNCTION DECLARATIONS
//HERIBERTO CORNIEL
//MARCH 25TH, 2015


#include <iostream>
#include <string>

using namespace std;

#ifndef LOCATIONS_H
#define LOCATIONS_H


class LOCATIONS
{

public:
    
    LOCATIONS(); // CONSTRUCTOR
    LOCATIONS(string, int, double); // OVERLOAD CONSTRUCTOR .....add "double" for miles
   ~LOCATIONS(); //DESTRUCTOR
    
    string getName(); //TO GET NAME OF PERSON
    int getZip();     //TO GET ZIP CODE
    double getMiles();
    
private:
    
    string newName;
    int newZip;
    double newMiles;
    
};

#endif