//  ajohar5_lab02_q1.cpp
//  Lab02
//
//  Created by Kevin Johar on 2018-02-12.
//  Copyright © 2018 Kevin Johar. all rights reserved.

//Name: Kevin Johar
//Student Number: 250 969 894
//Section: 006
//Email: ajohar5@uwo.ca

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;

//Main function, code begins here
int main() {
    //Variable declaration
    int grade;
    
    //Program prompts user to input grade grade
    cout<<"I will convert your grade to a letter value.\nWhat is your grade (between 50% and 100%)? "<<endl;
    cin>>grade;
    
    //Conditional section to output letter grade based on grade value input
    if (95<=grade && grade<=100) {
        cout<<"You have grade A+\n";
    }
    
    else if (90<=grade && grade<95) {
        cout<<"You have grade A\n";
    }
    
    else if (85<=grade && grade<90) {
        cout<<"You have grade A-\n";
    }
    
    else if (80<=grade && grade<85) {
        cout<<"You have grade B+\n";
    }
    
    else if (75<=grade && grade<80) {
        cout<<"You have grade B\n";
    }
    
    else if (70<=grade && grade<75) {
        cout<<"You have grade B-\n";
    }
    
    else if (65<=grade && grade<70) {
        cout<<"You have grade C+\n";
    }
    
    else if (60<=grade && grade<65) {
        cout<<"You have grade C\n";
    }
    
    else if (50<=grade && grade<60) {
        cout<<"You have grade C-\n";
    }
    
    else {
        cout<<"\nPlease enter a grade within 50% and 100% ONLY!\n"<<endl;
        main();
    }
    
    return 0;
}
