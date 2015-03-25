//BASE CLASS
//EatMe
//FUNCTION DEFINITIONS

#include <iostream>
#include "LOCATIONS.h"

using namespace std;


LOCATIONS::LOCATIONS ()

{
    newZip = 0;

 //   newServings = 0;
}

LOCATIONS::LOCATIONS(string name, int zip)  //add double miles

{
    newName = name;
    newZip = zip;
   // double newMiles = Miles;
}

LOCATIONS::~LOCATIONS() //DESCONSTRUCTOR
{
    
}

string LOCATIONS::getName() //get name of client
{
    return newName;
}

int LOCATIONS::getZip()
{
    return newZip;
}
