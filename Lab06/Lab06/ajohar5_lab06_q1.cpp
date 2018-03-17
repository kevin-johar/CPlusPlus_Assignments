//  ajohar5_lab06_q1.cpp
//  Lab05
//
//  Created by Kevin Johar on 2018-03-17.
//  Copyright © 2018 Kevin Johar. all rights reserved.

//Name: Kevin Johar
//Student Number: 250 969 894
//Section: 006
//Email: ajohar5@uwo.ca

#include <iostream>
using namespace std;

int rollDice ();
char check (int score);

int main() {
    //Seeds random function with the ever changing time in seconds since Jan 1 1970
    srand((unsigned int)time(NULL));
    
    //Variable declaration and initialization
    char roll('y');
    int score(0), currentRoll;
    
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
