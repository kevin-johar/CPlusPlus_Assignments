//  ajohar5_lab02_q3.cpp
//  Lab02
//
//  Created by Kevin Johar on 2018-02-12.
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

//Function to check whether the inputted character is lowercase or uppercase
int check (int check) {
    //Uppercase
    if ((65<=check && check<=90)) {
        return 1;
    }
    
    //Lowercase
    else if (97<=check && check<=122) {
        return 2;
    }
    
    //Invalid input
    else {
        return 0;
    }
}

//
int main () {
    //Variable declaration
    int ascii, checkInput;
    char inputChar,outputChar(' ');
    
    //Prompts user to input a character to encrypt
    cout<<"Please input a single character to encrypt: ";
    cin>>inputChar;
    
    //Converts the character to
    ascii = (int)inputChar;
    
    //Calls checkinput function to see if its a uppercase, lowercase or invalid input
    checkInput = check(ascii);
    
    //Uppercase
    if (checkInput==1) {
        outputChar = char(((ascii+21-65)%26)+65);
        cout<<"\nYour encrypted character is "<<outputChar<<endl;
    }
    
    //Lowercase
    else if (checkInput==2) {
        outputChar = char(((ascii+21-97)%26)+97);
        cout<<"\nYour encrypted character is "<<outputChar<<endl;
    }
    
    //If anything else its invalid and main function is called again
    else {
        cout<<"The input isn't valid, try again.\n"<<endl;
        main();
    }
}
