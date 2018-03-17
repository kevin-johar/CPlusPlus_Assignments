//  ajohar5_lab03_q1.cpp
//  Lab03
//
//  Created by Kevin Johar on 2018-02-15.
//  Copyright © 2018 Kevin Johar. all rights reserved.

//Name: Kevin Johar
//Student Number: 250 969 894
//Section: 006
//Email: ajohar5@uwo.ca

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

//Even number double factorial
int even (int input) {
    int factorial(1);
    for (int i=2;i<=input;i+=2) {
        factorial = factorial * i;
    }
    return factorial;
}

//Odd number double factorial
int odd (int input) {
    int factorial(1);
    for (int i=1;i<=input;i+=2) {
        factorial = factorial * i;
    }
    return factorial;
}

int main() {
    //Variable declaration
    int input;
    int factorial(1);
    bool check = true;
    int mod;
    
    cout<<"Input an integer number to calculate its factorial: ";
    cin>>input;
    
    while (check==true) {
        //Checks if the input is even or odd for the double factorial function
        mod = input%2;

        //If the input is a valid input this code runs
        if (input>0) {
            //Switch statement to control output
            switch (mod) {
                //If input is even number, factorial's value is changed to the value returned by the even function
                case 0:{
                    factorial=even(input);
                }
                    break;
                //If input is odd number, factorial's value is changed to the value returned by the odd function
                case 1: {
                    factorial=odd(input);
                }
                    break;
            }
            break;
        }
        
        else if (input==0) {
            factorial = 1;
            break;
        }
        
        else {
            cout<<"Invalid Entry! Please enter a positive integer: ";
            cin>>input;
        }
    }
    
    cout<<"The double factorial of "<<input<<" is: "<<factorial<<endl;
    
    return 0;
}
