//BASE CLASS
//WIFI LOCATOR
//FUNCTION DEFINITIONS
//HERIBERTO CORNIEL
//MARCH 25, 2015

#include <iostream>
#include <string>
#include "LOCATIONS.h"

using namespace std;

LOCATIONS::LOCATIONS(string name, int zip)

{
    newName = name;
    newZip = zip;
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
