//  ajohar5_lab03_q3.cpp
//  Lab03
//
//  Created by Kevin Johar on 2018-02-17.
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
using std::string;

//Function prints the header to begin the program
void header (string name) {
    // Current date/time based on current system
    time_t now = time(0);
    
    // Convert now to tm struct for local timezone
    tm* localtm = localtime(&now);
    
    cout<<"------------------------------"<<endl;
    cout<<"Student Name: "<<name<<endl;
    cout<<"Lab 03"<<endl;
    cout<<"Date: "<<asctime(localtm);
    cout<<"Question #3"<<endl;
    cout<<"------------------------------\n"<<endl;
}

int main () {
    //Declaration of variables
    int loop(-1),input,max(0),min(0),even(0),odd(0),median(0);
    //Double type needed to avoid truncation
    double mean(0);
    string name;
    
    //Prompt for user to input their name for the header
    cout<<"What's your name? ";
    cin>>name;
    
    //Calls header function to print introduction information
    header(name);
    
    
    while (loop<0) {
    cout<<"Enter a POSITIVE integer number for the number of loop iterations: ";
    cin>>loop;
    }
    
    //Runs for loop as long as user indicated in previous value (loop variable)
    for (int i=1;i<=loop;i++) {
        cout<<"\nEnter integer "<<i<<": ";
        cin>>input;

        //Mean is calculated and carried forward each time
        mean = (mean + input)/i;
        /*Max and min are calculated and carried forward each time. Syntax says if max>input then choose max
         otherwise choose input*/
        max = (max>input ? max:input);
        min = (min<input ? min:input);
        
        /*For the first run through of the for loop both the max and min will be the input value (not the initialized
         value)*/
        if (i==1) {
            max=input;
            min=input;
        }
        
        if (i==1)
        
        //If modulus of input by 2 is 0 even variable increases by 1
        if (input%2==0) {
            even++;
        }
        
        //If modulus of input by 2 is 1 odd variable increases by 1
        else {
            odd++;
        }
        
        //All information is printed
        cout<<"\nThe mean of "<<i<<" input(s) is: "<<mean<<endl;
        cout<<"Max value: "<<max<<endl;
        cout<<"Min value: "<<min<<endl;
        cout<<"Min value: "<<median<<endl;
        cout<<"Even count: "<<even<<endl;
        cout<<"Odd count: "<<odd<<"\n"<<endl;
    }
}
