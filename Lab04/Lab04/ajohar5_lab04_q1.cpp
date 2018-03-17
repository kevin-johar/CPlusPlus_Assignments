//  ajohar5_lab04_q1.cpp
//  Lab04
//
//  Created by Kevin Johar on 2018-03-05.
//  Copyright © 2018 Kevin Johar. all rights reserved.

//Name: Kevin Johar
//Student Number: 250 969 894
//Section: 006
//Email: ajohar5@uwo.ca

#include <iostream>
#include <iomanip>
using namespace std;

//Function declaration
void header ();
double calculate (double);

//Main Function begins here
int main() {
    //Variable declaration
    double input(0), atan;
    char mainLoop('y');
    
    //Calls the header function to print file information
    header();
    
    //User control structure using an infinite loop
    while (!(mainLoop=='n')) {
        bool validate = true;
        
        //Input validation structure using an infinite loop
        while (validate) {
            cout<<"\nEnter a real number in radians to compute the inverse tangent (-1 to 1): ";
            cin>>input;
            
            if (input>=(-1) && input<=1) {
                validate = false;
            }
        }
        
        //Calls calculate function and assigns returned value to variable "atan"
        atan = calculate(input);
        
        //Prints result
        cout<<"The result is "<<std::setprecision(6)<<atan<<endl;
        
        //Requests user input regarding whether they want to exit the program or not
        cout<<"Would you like to continue? (y/n): ";
        cin>>mainLoop;
        
        //If user input is 'n' program is exited
        if (mainLoop == 'n') {
            cout<<"\nGoodbye!"<<endl;
            return 0;
        }
    }
    return 0;
}

void header () {
    // Current date/time based on current system
    time_t now = time(0);
    
    // Convert now to tm struct for local timezone
    tm* localtm = localtime(&now);
    
    cout<<"-------------------------"<<endl;
    cout<<"Kevin Johar"<<endl;
    cout<<"Lab #4"<<endl;
    cout<<"Date: "<<asctime(localtm);
    cout<<"Question #1"<<endl;
    cout<<"-------------------------"<<endl;
}

//Calculates the arctan(x) of user's inputted x value, and returns calculated double value
double calculate (double input) {
    double base(0);
    
    //Controls the value of N using a for loop, run 1000 times for precision
    for (int n = 0; n < 2000; n++) {
        int exp_denom = (2*n)+1;
        double holdVal(1);
        
        //Nested for loop to calculate the value of the numerator
        for (int i = 1; i<=(exp_denom); i++) {
            holdVal *= input;
        }
        
        if ((n%2) == 0) {
            base += (holdVal)/exp_denom;
        }
        
        else {
            base += ((-1)*holdVal)/exp_denom;
        }
    }
    //Returns calculated value to main function to be printed
    return base;
}

