//  ajohar5_lab03_q2.cpp
//  Lab04
//
//  Created by Kevin Johar on 2018-02-15.
//  Copyright © 2018 Kevin Johar. all rights reserved.

//Name: Kevin Johar
//Student Number: 250 969 894
//Section: 006
//Email: ajohar5@uwo.ca

#include <stdio.h>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//Function prototype declaration
int fetchMenuChoice();
double convertCelsiusToFahrenheit (double degreesCelsius);
float convertCentimetersToInches (double centimeters);
double convertMetersToFeet (float meters);
float convertKilometersToMiles (float kilometers);
void exit ();

int main () {
    //Variable declaration
    int menu;
    bool check(true);
    double degreeCelsius, centimeters, meters, kilometers;
    
    //Begins infinite loop which is only exited through the boolean variable "check"
    while (check==true) {
        //Function prints the menu
        menu = fetchMenuChoice();
        
        //Switch setup to act on the menu section the user wishes to use
        switch (menu) {
            case 1: {
                //User inpute
                cout<<"\nInput a degree in Celsius: ";
                cin>>degreeCelsius;
                //Calls degree function and assigns returned value to variable
                degreeCelsius = convertCelsiusToFahrenheit(degreeCelsius);
                
                if (degreeCelsius<0) {
                    cout<<"\nIce may be possible, please be careful.";
                }
                else {
                    cout<<"The conversion is "<<degreeCelsius<<" F.\n"<<endl;
                }
                break;
            }
                
            case 2: {
                while (true) {
                    //User input
                    cout<<"\nInput a measurement (cm): ";
                    cin>>centimeters;
                    
                    if (centimeters<0) {
                        cout<<"\nPlease enter a POSITIVE measurement value (cm) ONLY!";
                    }
                    
                    else {
                        //Calls centimeter function and assigns returned value to variable
                        centimeters = convertCentimetersToInches(centimeters);
                        cout<<"The conversion is "<<centimeters<<" inches.\n"<<endl;
                        break;
                    }
                }
                break;
            }
                
            case 3: {
                while (true) {
                    //User input
                    cout<<"\nInput a measurement (m): ";
                    cin>>meters;
                    
                    if (meters<0) {
                        cout<<"\nPlease enter a POSITIVE measurement value (m) ONLY!";
                    }
                    
                    else {
                        //Calls meters function and assigns returned value to variable
                        meters = convertMetersToFeet(meters);
                        cout<<"The conversion is "<<meters<<" feet.\n"<<endl;
                        break;
                    }
                }
                break;
            }
                
            case 4: {
                while (true) {
                    //User input
                    cout<<"\nInput a kilometers (km/h) from 0-160km/h: ";
                    cin>>kilometers;
                    
                    if (kilometers>=0 && kilometers<=160) {
                        //Calls kmh function and assigns returned value to variable
                        kilometers = convertKilometersToMiles(kilometers);
                        cout<<"The conversion is "<<kilometers<<" MPH.\n"<<endl;
                        break;
                    }
                    
                    else {
                        cout<<"\nPlease enter a kilometers between 0km/h to 160km/h ONLY!";
                    }
                }
                break;
            }
                
            case 5: {
                exit();
                //Check variable changed to false to exit infinite loop
                check = false;
                break;
            }
                
            default: {
                cout<<endl;
            }
        }
    }
    
    return 0;
}

//Function to print menu
int fetchMenuChoice() {
    int menu;
    
    cout<<"******************************"<<endl;
    cout<<"****** Value Conversion ******"<<endl;
    cout<<"******************************"<<endl;
    cout<<"* 1. Celsius -> Fahrenheit   *"<<endl;
    cout<<"* 2. Centimeters -> Inches   *"<<endl;
    cout<<"* 3. Meters -> Feet          *"<<endl;
    cout<<"* 4. Km/h -> MPH             *"<<endl;
    cout<<"* 5. Exit                    *"<<endl;
    cout<<"******************************\n"<<endl;
    
    while (true) {
    cout<<"\nPlease input a choice (1-5): ";
    cin>>menu;
        
    if (menu<6 && menu >0)
        return menu;
    }
}

//First menu option (degrees celsius to faranheit)
double convertCelsiusToFahrenheit (double degreesCelsius) {
    degreesCelsius = ((9 * degreesCelsius)/5)+32;
        
    return degreesCelsius;
}

//Second menu option (cm to inches)
float convertCentimetersToInches (double centimeters) {
    centimeters = 0.39*centimeters;
    
    return centimeters;
}

//Third menu function (m to feet)
double convertMetersToFeet(float meters) {
    meters = 3.28*meters;
    
    return meters;
}

//Fourth menu function (km/h to mph)
float convertKilometersToMiles(float kilometers) {
    kilometers = kilometers/1.609;
    
    return kilometers;
}

//Exit function
void exit () {
    cout<<"\n------------------------------"<<endl;
    cout<<"---        Goodbye!        ---"<<endl;
    cout<<"------------------------------"<<endl;
}

