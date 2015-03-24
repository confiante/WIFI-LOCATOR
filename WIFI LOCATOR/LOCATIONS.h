//LOCATIONS.h
//EatMe
//Function declarations...



#include <iostream>
#include <string>

using namespace std;

#ifndef LOCATIONS_H
#define LOCATIONS_H


class LOCATIONS

{
public:
    
    LOCATIONS(); // CONSTRUCTOR
    LOCATIONS(string, int); // OVERLOAD CONSTRUCTOR .....add "double" for miles
    ~LOCATIONS(); //DESTRUCTOR
    
    string getName(); //TO GET NAME OF PERSON
    int getZip();
   // double getServings();
    
    
private:
    
    string newName;
    int newZip;
   // double newMiles; ....away from wifi spot
    
};

#endif