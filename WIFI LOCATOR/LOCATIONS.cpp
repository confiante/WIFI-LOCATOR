//BASE CLASS
//EatMe
//FUNCTION DEFINITIONS

#include <iostream>
#include <string>
#include "LOCATIONS.h"

using namespace std;


LOCATIONS::LOCATIONS () //delete

{
    newZip = 0;

 //   newServings = 0;
}
//delete end

LOCATIONS::LOCATIONS(string name, int zip)  //add double miles

{
    newName = name;
    newZip = zip;
   // double newMiles = Miles;
}

LOCATIONS::~LOCATIONS() //DECONSTRUCTOR
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
