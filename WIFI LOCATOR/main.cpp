//main.cpp
//WIFI LOCATOR
//future project could include doing using haversine formula "https://megocode3.wordpress.com/2008/02/05/haversine-formula-in-c/" to get better approximation of WIFI Locations...also maybe pulling in list from external file of address with WIFI
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
    double miles;
    
    cout << "What is your name? \n";
    cin >> name;
    
    cout << "Enter a zip code within the five boroughs (A ZIP CODE RANGE BETWEEN 10001-11697): " << endl;
    cin >> zip;
    if (10000 <= zip || zip >= 11698){
        cout << "This is not a zip code within the Five Boroughs...Please try again! \n";
           return 0;} //Declaring range of zip codes in New York City 5 Boroughs

    
    cout << "What's the farthest miles you'd travel \n";
    cin >> miles;
    
    LOCATIONS User_1(name, zip, miles);
    
    cout << " Hi! " << User_1.getName() << " The closest park with Wifi location to " << User_1.getZip() << " is " << User_1.getMiles() << " miles away at " << endl;

    
    if (User_1.getZip() >= 10001 && User_1.getZip() <= 10282){
       cout << "Thomas Paine Park, New York, NY 10007 \n";}
   
    else if (User_1.getZip() >= 10301 && User_1.getZip() <= 10314){
       cout << "Tappen Park Tappen Park, Bay St, Staten Island, NY 10304 \n";}
    
    else if (User_1.getZip() >= 10451 && User_1.getZip() <= 10475){
       cout << "Devoe Park 101 W Fordham Rd, Bronx, NY 10468 \n";}
    
    else if (User_1.getZip() >= 11201 && User_1.getZip() <= 10251){
       cout << "Prospect Park 95 Prospect Park West, Brooklyn, NY 11215 \n";}
    
    else if (User_1.getZip() >= 11001 && User_1.getZip() <= 11697){
       cout << "Flushing Meadows Park Meadow Lake Rd W, Forest Hills, NY 11375 \n";}
    

return 0;

}