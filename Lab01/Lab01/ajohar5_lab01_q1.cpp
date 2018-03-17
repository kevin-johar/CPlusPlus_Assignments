//  ajohar5_lab01_q1.cpp
//  Lab01
//
//  Created by Kevin Johar on 2018-01-31.
//  Copyright © 2018 Kevin Johar. All rights reserved.

//Name: Kevin Johar
//Student Number: 250 969 894
//Section: 006
//Email: ajohar5@uwo.ca
//

//This program prompts the user to input 4 grade values and their respective weighting
//Then it calculates the average of the inputted values and prints it back to the user
#include <iostream>
using namespace std;

//Function that prompts the user to input a value and stores it in the respective variable being declared
double recieveInput () {
    double temp;
    cin>>temp;
    
        if (cin.fail())
        {
            cout<<"Please enter a numerical value ONLY!\nTry again: ";
            cin.clear();
            recieveInput();
        }
    
    return temp;
}

int main() {
    //variable declaration
    string name = "Default";
    double mark1, weight1, mark2, weight2, mark3, weight3, mark4, weight4, average;

    //Output to introduce user to program
    cout<<"What is your name? ";
    cin>>name;

    cout<<"\nHello, "<<name<<"!"<<endl;
    cout<<"Please input the 4 grades you'd like to average"<<endl;
    cout<<"as well as their respective weight,"<<endl;
    cout<<"I will do the math for you.\n"<<endl;
    cout<<"Assure the weights add up to 100%.\n";

    //Prompts user to input 4 marks and their respective weighting
    //stores the input to the respective variable
    cout<<"Enter mark #1: ";
    mark1=recieveInput();

    cout<<"Enter mark #1's weight(%): ";
    weight1=recieveInput();

    cout<<"Enter mark #2: ";
    mark2=recieveInput();
    
    cout<<"Enter mark #2's weight(%): ";
    weight2=recieveInput();
    
    cout<<"Enter mark #3: ";
    mark3=recieveInput();
    
    cout<<"Enter mark #3's weight(%): ";
    weight3=recieveInput();
    
    cout<<"Enter mark #4: ";
    mark4=recieveInput();
    
    cout<<"Enter mark #4's weight(%): ";
    weight4=recieveInput();
    
    //Converts weight from an integer (%) to a decimal value
    weight1 = weight1/100;
    weight2 = weight2/100;
    weight3 = weight3/100;
    weight4 = weight4/100;
    
    //If user's mark weight values add up to 100% the program calculates and displays the weighted average
    if (weight1+weight2+weight3+weight4==1) {
    
        average = (mark1*weight1)+(mark2*weight2)+(mark3*weight3)+(mark4*weight4);
    
        cout<<"Your average is "<<average<<"%.\n";
    }
    
    //If the user's mark weight values do not add up to 100% the program restarts
    else {
        cout<<"Please re-enter your values as your grade weights do not add up to 100%."<<endl;
        return main();
    }
}

