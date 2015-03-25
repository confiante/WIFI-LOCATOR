//BASE CLASS
//WIFI LOCATOR
//FUNCTION DEFINITIONS
//HERIBERTO CORNIEL
//MARCH 25, 2015

#include <iostream>
#include <string>
#include "LOCATIONS.h"

using namespace std;

LOCATIONS::LOCATIONS(string name, int zip, double miles)

{
    newName = name;
    newZip = zip;
    newMiles = miles;
}

LOCATIONS::~LOCATIONS() //DECONSTRUCTOR
{
    
}

string LOCATIONS::getName() //get name of user
{
    return newName;
}

int LOCATIONS::getZip()
{
    return newZip;
}

double LOCATIONS::getMiles()
{
    return newMiles;
}