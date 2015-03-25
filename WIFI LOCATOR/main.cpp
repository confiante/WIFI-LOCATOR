//LOCATIONS.h
//WIFI LOCATOR
//HERIBERTO CORNIEL
//MARCH 25TH, 2015

#include <iostream>
#include <string>
#include "LOCATIONS.h"

void address();

using namespace std;


int main()

{
       
    string name;
    int zip;
    
    cout << "What is your name? \n";
    cin >> name;
    
    cout << "What is your zip code \n";
    cin >> zip;
    
    LOCATIONS User_1(name, zip);
    
    cout << " Hi! " << User_1.getName() << " The closest Wifi location to " << User_1.getZip() << " is " << endl;

    
    if (User_1.getZip() > 10000)
    {cout << "Thomas Paine Park, New York, NY 10007";}
    else if (User_1.getZip() > 10250)
    {cout << "Tappen Park Tappen Park, Bay St, Staten Island, NY 10304";}
    else if (User_1.getZip() > 10750)
    {cout << "Devoe Park 101 W Fordham Rd, Bronx, NY 10468";}
    else if (User_1.getZip() > 11295)
    {cout << "Prospect Park 95 Prospect Park West, Brooklyn, NY 11215";}
    else if (User_1.getZip() > 11375)
    {cout << "Flushing Meadows Park Meadow Lake Rd W, Forest Hills, NY 11375";}

    return 0;

}

