//  ajohar5_lab03_q2.cpp
//  Lab03
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

//Function to print menu
void printMenu () {
    cout<<"******************************"<<endl;
    cout<<"****** Value Conversion ******"<<endl;
    cout<<"******************************"<<endl;
    cout<<"* 1. Celsius -> Fahrenheit   *"<<endl;
    cout<<"* 2. Centimeters -> Inches   *"<<endl;
    cout<<"* 3. Meters -> Feet          *"<<endl;
    cout<<"* 4. Km/h -> MPH             *"<<endl;
    cout<<"* 5. Exit                    *"<<endl;
    cout<<"******************************\n"<<endl;
}

//First menu option (degrees celsius to faranheit)
void celsius () {
    double temp;
    
    cout<<"\nInput a degree in Celsius: ";
    cin>>temp;
    
    if (temp<0) {
        cout<<"\nIce may be possible, please be careful.";
    }
    
    temp = ((9 * temp)/5)+32;
    
    cout<<"The conversion is "<<temp<<" F.\n"<<endl;
}

//Second menu option (cm to inches)
void centimeter () {
    double distance;
    bool check=true;
    
    while (check==true) {
        cout<<"\nInput a measurement (cm): ";
        cin>>distance;

        if (distance<0) {
                    cout<<"\nPlease enter a POSITIVE measurement value (cm) ONLY!";
            }
        
        else {
            distance = 0.39*distance;
            cout<<"The conversion is "<<distance<<" inches.\n"<<endl;
            break;
        }
    }
}

//Third menu function (m to feet)
void meters () {
    double distance;
    bool check=true;
    
    while (check==true) {
        cout<<"\nInput a measurement (m): ";
        cin>>distance;
        
        if (distance<0) {
            cout<<"\nPlease enter a POSITIVE measurement value (m) ONLY!";
        }
        
        else {
            distance = 3.28*distance;
            cout<<"The conversion is "<<distance<<" feet.\n"<<endl;
            break;
        }
    }
}

//Fourth menu function (km/h to mph)
void kmh () {
    double speed;
    bool check=true;
    
    while (check==true) {
        cout<<"\nInput a speed (km/h) from 0-160km/h: ";
        cin>>speed;
        
        if (speed>=0 && speed<=160) {
            speed = speed/1.609;
            cout<<"The conversion is "<<speed<<" MPH.\n"<<endl;
            break;
        }
        
        else {
            cout<<"\nPlease enter a speed between 0km/h to 160km/h ONLY!";
        }
    }
}

//Exit function
void exit () {
    cout<<"\n------------------------------"<<endl;
    cout<<"---        Goodbye!        ---"<<endl;
    cout<<"------------------------------"<<endl;
}


int main () {
    //Variable declaration
    int menu;
    bool check = true;
    
    //Begins infinite loop which is only exited through the boolean variable "check"
    while (check==true) {
        //Function prints the menu
        printMenu ();
        cout<<"\nPlease input a choice (1-5): ";
        cin>>menu;
        
        //Switch setup to act on the menu section the user wishes to use
        switch (menu) {
            case 1: {
                celsius();
                break;
            }
                
            case 2: {
                centimeter();
                break;
            }
                
            case 3: {
                meters();
                break;
            }
                
            case 4: {
                kmh ();
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
