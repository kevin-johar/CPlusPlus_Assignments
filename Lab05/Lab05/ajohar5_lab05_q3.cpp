// ajohar5_lab05_q3.cpp
//  Lab05
//
//  Created by Kevin Johar on 2018-03-14.
//  Copyright © 2018 Kevin Johar. all rights reserved.

//Name: Kevin Johar
//Student Number: 250 969 894
//Section: 006
//Email: ajohar5@uwo.ca

#include <stdlib.h>
#include <iostream>
#include <ctime>
using namespace std;

//Function prototypes
int rollDice();
char check (int score);

int main () {
    //Seeds random function with the ever changing time in seconds since Jan 1 1970
    srand((unsigned int)time(NULL));
    
    //Variable declaration and initialization
    char roll('y');
    int score(0), currentRoll;
    
    //Infinite loop control structure
    while(roll!='n') {
        cout<<"The goal is a score of: 25"<<endl;
        
        cout<<"Your current running score is: "<<score<<endl;
        
        //User input to control infinite loop
        cout<<"Would you like to roll the die? (y/n): ";
        cin>>roll;
        
        //If user wants to roll, rollDice function is called to generate a randome number 1-6, value added to score
        if (roll=='y') {
            currentRoll = rollDice();
            score += currentRoll;
            cout<<"The result of the current roll is: "<<currentRoll<<endl<<endl;
            
        }
        
        //If user wants to exit, infinite loop breaks
        else if (roll == 'n') {
            cout<<"\nGoodbye!"<<endl;
            break;
        }
        
        //Check function checks to see if the user passed 25 or got to 25
        roll = check (score);
    }
    
}

//Function that calculates a value from 1-6 to simulate a die roll
int rollDice () {
    int num;
    
    num = 1 + (rand()%6);

    return num;
}

//Function to check if user passed 25 or got to 25
char check (int score) {
    if (score > 25) {
        cout<<"Your score of "<<score<<" is more than 25!"<<endl;
        cout<<"You LOSE!"<<endl;
        return 'n';
    }
    
    else if (score == 25) {
        cout<<"Your got to 25!"<<endl;
        cout<<"You WIN!"<<endl;
        return 'n';
    }
    
    else {
        return 'y';
    }
}
