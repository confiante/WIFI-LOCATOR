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
    double miles;
    
    cout << "What is your name? \n";
    cin >> name;
    
    cout << "Enter a zip code within the five boroughs (A ZIP CODE RANGE BETWEEN 10001-11697): " << endl;
    cin >> zip;
    if (zip < 10000 || zip > 11697){
        cout << "This is not a zip code within the Five Boroughs...Please try again! \n";
           return 0;} //Declaring range of New York City 5 Boroughs

    
    cout << "What's the farthest miles you'd travel \n";
    cin >> miles;
    
    LOCATIONS User_1(name, zip, miles);
    
    cout << " Hi! " << User_1.getName() << " The closest Wifi location to " << User_1.getZip() << " is " << User_1.getMiles() * 12 << " miles away at " << endl;

    
    if (User_1.getZip() > 10001 && User_1.getZip() < 10125){
       cout << "Thomas Paine Park, New York, NY 10007";}
    else if (User_1.getZip() > 10250 && User_1.getZip() < 10500){
       cout << "Tappen Park Tappen Park, Bay St, Staten Island, NY 10304";}
    else if (User_1.getZip() > 10750 && User_1.getZip() < 10925){
       cout << "Devoe Park 101 W Fordham Rd, Bronx, NY 10468";}
    else if (User_1.getZip() > 11295 && User_1.getZip() < 10500){
       cout << "Prospect Park 95 Prospect Park West, Brooklyn, NY 11215";}
    else if (User_1.getZip() > 11375 && User_1.getZip() > 10500){
       cout << "Flushing Meadows Park Meadow Lake Rd W, Forest Hills, NY 11375";}
    

return 0;

}

