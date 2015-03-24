//BASE CLASS
//EatMe
//function definitions

#include "LOCATIONS.h"

LOCATIONS::LOCATIONS ()

{
    newZip = 0;
 //   newServings = 0;
}


LOCATIONS::LOCATIONS(string name, int Zip)  //add double miles

{
    string newName = name;
    int newZip = Zip;
   // double newMiles = Miles;
}

LOCATIONS::~LOCATIONS()
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

//int LOCATIONS::getMiles()
//{
//    return newMiles;
//}