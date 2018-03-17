//
//  Lab00.cpp
//  Lab00
//
//  Created by Kevin Johar on 2018-01-24.
//  Copyright © 2018 Kevin Johar. All rights reserved.
//

//Name: Kevin Johar
//Student Number: 250 969 894
//Section: 006
//Email: ajohar5@uwo.ca

#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Declare and initialize variables
    double x1,y1,x2,y2,side1,side2,distance,perimeter,area;
    
    //Prompt the user to input (x1, y1) and (x2,y2) values
    cout<<"Enter x1 value: ";
    cin>>x1;
    
    cout<<"Enter y1 value: ";
    cin>>y1;
    
    cout<<"Enter x2 value: ";
    cin>>x2;
    
    cout<<"Enter y2 value: ";
    cin>>y2;
    
    //Compute the sides of the triangle
    side1 = x2 -x1;
    side2 = y2 - y1;
    
    //Calculate distance
    distance = sqrt ((side1*side1)+(side2*side2));
    
    //Print the distance
    cout<<"\nThe distance between points ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is "<<distance<<"\n"<<endl;
    
    //Calculate the perimeter of the triangle
    perimeter = side1 +side2 + distance;
    
    //Prints the perimeter of the triangle made by the two points
    cout<<"The perimeter of the triangle made by the two points ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is " <<perimeter<<" units.\n"<<endl;
    
    //Calculate the area of the triangle
    area = (side1*side2)/2;
    
    //Prints the area of the triangle
    cout<<"The area of the triangle made by the two points ("<<x1<<","<<y1<<") and ("<<x2<<","<<y2<<") is " <<area<<" units squared.\n"<<endl;
    
    return 0;   //Indication that the program ended succesfully
} //End function main
