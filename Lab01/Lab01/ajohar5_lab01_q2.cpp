//  ajohar5_lab01_q1.cpp
//  Lab01
//
//  Created by Kevin Johar on 2018-01-31.
//  Copyright © 2018 Kevin Johar. All rights reserved.

//Name: Kevin Johar
//Student Number: 250 969 894
//Section: 006
//Email: ajohar5@uwo.ca

#include <stdio.h>
#include <iostream>
using namespace std;

//Function that converts lowercase to uppercase and returns value to main function
char convert ()
{
    //Declares temporary input variable
    char input(' ');
    
    //Declaration of variables
    int asciiValue(0), asciiValueTemp;
    
    //While the asciiValue is not within lowercase range it will continue to prompt user to input a correct value
    while((asciiValue<97)||(asciiValue>122))
    {
        cout<<"Please input a lowercase letter: ";
        cin>>input;
        
        //Converts char type to int type
        asciiValue = (int)input;
        
        //Subtracts asciiValue by 32 to achieve uppercase value of the same letter
        asciiValueTemp = asciiValue - 32;
        
        
        //converts int type back to char type
        input = (char)asciiValueTemp;
    }
    return input;
}

//This program prompts the user to input a lowercase letter
//and outputs the uppercase equivalent.
int main () {
    //Variable declaration
    string name;
    char charInput=' ';
    
    //Prompots user to input their name
    //then introduces user to the program
    cout<<"What is your name? ";
    cin>>name;
    
    cout<<"Hello, "<<name<<"!"<<endl;
    cout<<"\nToday I will be converting"<<endl;
    cout<<"any lower case letter to an uppercase letter\n"<<endl;
    
    //Calls the convert function
    charInput = convert();
    
    cout<<"The upper case letter is: "<<charInput<<endl;
}
