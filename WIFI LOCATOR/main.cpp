//LOCATIONS.h
//EatMe
//Function declarations...

#include <iostream>
#include <string>
#include "LOCATIONS.h"

using namespace std;

int main()

{
    
    string name;
    int zip;
    //double Miles;
    
    cout << "What is your name? \n";
    cin >> name;
    
    cout << "What is your zip code \n";
    cin >> zip;
    
    LOCATIONS User_1(name, zip);  //add miles
    
    cout << " Hi! " << User_1.getName() << "The closest Wifi location to " << User_1.getZip() << " is " << endl;
  //  cout << Address << endl;  ....create address
    
    return 0;
    
    
}
