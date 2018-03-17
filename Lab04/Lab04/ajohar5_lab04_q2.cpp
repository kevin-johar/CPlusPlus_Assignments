//  ajohar5_lab04_q2.cpp
//  Lab04
//
//  Created by Kevin Johar on 2018-03-05.
//  Copyright © 2018 Kevin Johar. all rights reserved.

//Name: Kevin Johar
//Student Number: 250 969 894
//Section: 006
//Email: ajohar5@uwo.ca

#include <iostream>
#define PI 3.1415926535897
using namespace std;

//Function prototypes declares
double inputToDegrees (double);
double inputToRadians (int);
double sineVal (double);
double pow (double, int);
unsigned long factorialCalc (int);
void drawSine (double);

//Main function begins here
int main () {
    //Variable declaration
    double input(0), degrees, radians, sinx(0);
    bool inputCheck(true);
    char loop('y');
    
    while (loop) {
        //Input validation
        while (inputCheck) {
            cout<<"How many rectified sine cycles should be printed?"<<endl<<"Enter a value greater than 0: ";
            cin>>input;
            if (input > 0)
                break;
        }
        
        //Converts number of sine waves value into a degrees value
        degrees = inputToDegrees(input);
    
        //For loop runs, where
        for (int x = 0; x < degrees; x+=5)
        {
            sinx = 0;
            //Converts i value to a radian value, or x value
            radians = inputToRadians(x);
            
            //Converts radian value to a sin(x), or y value
            sinx = sineVal(radians);
        
            //Draws the sin wave
            drawSine(sinx);
            
            if (x%2==1) {
                cout<<" "<<x/5;
            }
            
            cout << endl;
        }
        
        cout<<"\nWould you like to try again? (y/n) "; cin>>loop;
    }
}

//Converts the sine cycle value to degrees, and returns the calculated value
double inputToDegrees (double input) {
    double degrees;
    
    degrees = input*360;
    
    return degrees;
}

//Calculates and returns the radians equivalent for each x value in degrees
double inputToRadians (int x) {
    double radians;
    
    //Converts the x value (degrees to radians) where the wave repeats after 180 degrees or π radians
    radians = x%180 * (3.14 / 180);
    
    return radians;
}

//Calculates the sin(x) or y-value
double sineVal (double radians) {
    //Variable declaration
    double negativeOne, numerator, base(0);
    unsigned long factorial;
    
    //For loop calculates the sin(x) value to "n" times (10 as it was found to be accurate/efficient
    for (int n = 0; n < 10; n++) {
        int exp_denom = (2*n)+1;
        
        //Calculates the numerator
        numerator = pow(radians, exp_denom);
        
        //Calculates the factorial/denominator
        factorial = factorialCalc(exp_denom);
        
        //Calculates whether the numerator/denominator has to be multiplied by 1 or -1
        negativeOne = pow(-1,n);
        
        //Sums the calculated value each the time the for loop runs
        base += (negativeOne*numerator)/factorial;
    }
    return base;
}

//Nested for loop to calculate a number raised to a power
double pow (double base, int power) {
    double holdVal(1);

    for (int i = 1; i<=(power); i++) {
        holdVal *= base;
    }
    
    return holdVal;
}

//Unsigned long value used to increase range of available numbers, without this incorrect values were calculated
//Calculates the factorial/denominator
unsigned long factorialCalc (int base) {
    unsigned long holdVal(1);
    
    //Nested for loop to calculate the value of the numerator
    for (int i = 1; i<=(base); i++) {
        holdVal *= i;
    }
    return holdVal;
}

//Draws the sine wave based on the y-value or sin(x) value
void drawSine (double sinx) {
    for (int k = 0; k < (sinx*40); k++)
        cout << "*";
}
