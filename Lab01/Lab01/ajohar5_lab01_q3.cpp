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
#include <cmath>

using namespace std;

//Function that prompts the user to input a value and stores it in the respective variable being declared
double recieveInput (double temp) {
    cin>>temp;
    
    return temp;
}

//Main function
int main () {
    //Variable initialization
    double x1(0),y1(0),z1(0),x2(0),y2(0),z2(0),xdiff,ydiff,zdiff,distance;
    
    //Variables are declared through calling the recieve input
    cout<<"Enter the x-coordinate of the 1st point: ";
    x1 = recieveInput(x1);
    
    cout<<"Enter the y-coordinate of the 1st point: ";
    y1 = recieveInput(y1);
    
    cout<<"Enter the z-coordinate of the 1st point: ";
    z1 = recieveInput(z1);
    
    cout<<"\nEnter the x-coordinate of the 2nd point: ";
    x2 = recieveInput(x2);
    
    cout<<"Enter the y-coordinate of the 2nd point: ";
    y2 = recieveInput(y2);
    
    cout<<"Enter the z-coordinate of the 2nd point: ";
    z2 = recieveInput(z2);
    
    //Prints out both points in coordinate form
    cout<<"\nYour two points are ("<<x1<<","<<y1<<","<<z1<<") and ("<<x2<<","<<y2<<","<<z2<<")."<<endl;
    
    //Calculates the difference between x, y, and z values respectively
    xdiff = (x2-x1);
    ydiff = (y2-y1);
    zdiff = (z2-z1);
    
    //Prints the difference between x, y and z values respectively
    cout<<"\nThe difference between the two x-values: "<<xdiff<<" units";
    cout<<"\nThe difference between the two x-values: "<<ydiff<<" units";
    cout<<"\nThe difference between the two x-values: "<<zdiff<<" units"<<endl;
    
    //Calculates the euclidian distance between the two points
    distance = sqrt(pow(xdiff,2)+pow(ydiff,2)+pow(zdiff,2));
    
    //Prints the euclidian distance between the two points
    cout<<"\nThe Euclidean distance between point 1 and point 2 is: "<<distance<<"."<<endl;
}
