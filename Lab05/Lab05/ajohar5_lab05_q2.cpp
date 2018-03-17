// ajohar5_lab05_q2.cpp
//  Lab05
//
//  Created by Kevin Johar on 2018-03-14.
//  Copyright © 2018 Kevin Johar. all rights reserved.

//Name: Kevin Johar
//Student Number: 250 969 894
//Section: 006
//Email: ajohar5@uwo.ca

#include <iostream>
using namespace std;
const double pi = 3.14159265358979323846;

//Function prototyping
void printHeader (string name, int lab, string date, int question);
char displayMenu ();
double computePower (double base, int exponent);
double computeSine (double degrees, int numberOfIterations);
double computeExponential (double exponential, int numberOfIterations);
double computeFactorial(int number);
void printFooter ();

//Main function begins here
int main () {
    //Variable declaration and initialization
    string name("Kevin"), date("March 14, 2018");
    double base, degreeVal, result(0), expVal;
    int labNum(5), questionNum(2), exp, nVal, factorial(-1);
    char menu('a');
    
    //Header is printed
    printHeader(name, labNum, date, questionNum);
    
    //User based control structure to exit program
    while (menu != 'e') {
        //Menu is displayed everytime the user controlled infinite loop is run
        menu = displayMenu();
        
        //Switch function used to run each respective menu option based on user input
        switch (menu) {
            //Calculates a number to a power
            case 'a':
            {
                cout<<"\nPlease enter a real number base: ";
                cin>>base;
                cout<<"Please enter an integer exponent: ";
                cin>>exp;
                
                result = computePower(base, exp);
            }
                break;
            case 'b':
                {
                    cout<<"\nPlease enter a number in degrees: ";
                    cin>>degreeVal;
                    cout<<"Please enter the number of iterations: ";
                    cin>>nVal;
                    
                    result = computeSine(degreeVal, nVal);
                }
                break;
            case 'c':
                {
                    cout<<"\nPlease enter a number for the exponential: ";
                    cin>>expVal;
                    cout<<"Please enter the number of iterations: ";
                    cin>>nVal;
                    
                    result = computeExponential(expVal, nVal);
                }
                break;
            case 'd':
                {
                    while (factorial<0) {
                        cout<<"\nPlease input a positive integer: ";
                        cin>>factorial;
                    }
                
                    result = computeFactorial(factorial);
                }
                break;
            case 'e':
            {
                printFooter();
                return 0;
            }
            default:
                break;
        }
        cout<<"The result is: "<<result<<endl;
    }
    
}

//Prints the header at the beginning of the program
void printHeader (string name, int lab, string date, int question) {
    cout<<"------------------------------"<<endl;
    cout<<"Student Name: "<<name<<endl;
    cout<<"Lab #"<<lab<<endl;
    cout<<"Date: "<<date<<endl;
    cout<<"Question: "<<question<<endl;
    cout<<"------------------------------"<<endl;
}

//Prints the menu, requests user to pick a menu option, and returns value to main function to be assigned to menu variable
char displayMenu () {
    char menu(0);
    
    cout<<"\n----------------------------"<<endl;
    cout<<"-- Calculator Application --"<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"a. Power Function"<<endl;
    cout<<"b. Sine Function"<<endl;
    cout<<"c. Exponential Function"<<endl;
    cout<<"d. Factorial Function"<<endl;
    cout<<"e. Exit"<<endl;
    cout<<"----------------------------"<<endl;
    
    //Validates user input to be within a-e ASCII values
    while (!(menu>=97 && menu <=101)) {
        cout<<"Please enter your choice: ";
        cin>>menu;
    }
    return menu;
}

//Calculates a number to a power
double computePower (double base, int exponent) {
    double result(1);
    
    if (exponent<0) {
        for (int i = 0 ; i < (-1*exponent) ; i++) {
            result*=base;
        }
        result = 1.0/result;
    }
    
    else {
        for (int i = 0 ; i < exponent ; i++) {
            result*=base;
        }
    }
    
    return result;
}

//Calculates sine value
double computeSine (double degrees, int numberOfIterations) {
    //Variable declaration
    double negativeOne, numerator, base(0);
    double factorial;
    double radians = degrees * (pi/180);
    
    //For loop calculates the sin(x) value to "n" times (10 as it was found to be accurate/efficient
    for (int n = 0; n < numberOfIterations; n++) {
        int exp_denom = (2*n)+1;
        
        //Calculates the numerator
        numerator = computePower(radians, exp_denom);
        
        //Calculates the factorial/denominator
        factorial = computeFactorial(exp_denom);
        
        //Calculates whether the numerator/denominator has to be multiplied by 1 or -1
        negativeOne = computePower(-1, n);
        
        //Sums the calculated value each the time the for loop runs
        base += (negativeOne*numerator)/factorial;
    }
    return base;
}

//Calculates exponential function value
double computeExponential (double exponential, int numberOfIterations) {
    double holdVal(0);
    
    //If number of iterations are too high to slow the computer down, program maintains N max at 20
    if (numberOfIterations>20)
    {
        numberOfIterations = 20;
    }
    
    for (int n = 0; n<=numberOfIterations; n++) {
        holdVal+=(computePower(exponential, n)/computeFactorial(n));
    }
    
    return holdVal;
}

//Calculates factorial of a user inputted value
//Unsigned long used to extend available numbers
double computeFactorial (int number) {
    double holdVal(1);
    
    //Nested for loop to calculate the value of the numerator
    for (int i = 1; i<=(number); i++) {
        holdVal *= i;
    }
    return holdVal;
}

//Prints goodby footer when user wants to exit program
void printFooter () {
    cout<<"------------------------------"<<endl;
    cout<<"Goodbye!"<<endl;
    cout<<"------------------------------"<<endl;
}

