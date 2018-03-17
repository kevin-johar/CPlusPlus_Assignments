//  ajohar5_lab02_q2.cpp
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
#include <iomanip>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    //Variable declarization
    double a,b,c,discriminant,complexDiscriminant,singleRoot,root1,root2,complexFirst;
    string name;
    
    //User is prompted to input their name and the screen outputs a introduction banner
    cout<<"What is your name? ";
    cin>>name;
    
    cout<<"******************************************************"<<endl;
    cout<<"\t\t\t\t* ES1036 Lab02 Q2 *"<<endl;
    cout<<"\t\t\t\t* "<<name<<" *"<<endl;
    cout<<"******************************************************"<<endl;
    cout<<"This program solves a quadratic equation of the form \nax^2 + bx + c = 0\n"<<endl;
    
    //Prompts the user to input the three equation variables
    cout<<"Please input a: ";
    cin>>a;
    
    cout<<"Please input b: ";
    cin>>b;
    
    cout<<"Please input c: ";
    cin>>c;
    
    //Initializes the discriminant for regular roots and complex roots
    discriminant = pow(b,2)-(4*a*c);
    complexDiscriminant =(4*a*c)-pow(b,2);
    
    //Conditional statements to determine the number of roots available to solve for
    if (a==0) {
        if (!(b==0)) {
            //Solving the root solution of a linear system by rearranging the equations y=bx+c to solve for x when y=0
            singleRoot = -c/b;
            //Prints out the linear root solution to 4 decimal places in precision
            cout<<std::setprecision(4)<<std::fixed<<"This equation has a single root solution of "<<singleRoot<<endl;
            return 0;
        }
        
        else if (b==0 && c==0) {
            cout<<"This equation only has the trivial solution.\n";
            return 0;
        }
        
        else if (b==0 && !(c==0)) {
            cout<<"This equation has no solution.\n";
            return 0;
        }
    }
    
    else if (!(a==0) && discriminant>=0) {
        //Initializes the root1 and root2 variables to calculate and store the values of both roots
        root1 = (-b + sqrt(discriminant))/(2*a);
        root2 = (-b - sqrt(discriminant))/(2*a);
        //Prints out the two regular root solutions to 4 decimal places in precision
        cout<<std::setprecision(4)<<std::fixed<<"This equation has two root solutions: "<<root1<<" and "<<root2<<".\n";
        return 0;
    }
    
    else if (!(a==0) && discriminant<0) {
        complexFirst = -b/(2*a);
        //Initializes the root1 and root2 variables to calculate and store the values of both complex roots
        root1 = sqrt(complexDiscriminant)/(2*a);
        root2 = sqrt(complexDiscriminant)/(2*a);
        //Prints out the two complex root solutions to 4 decimal places in precision
        cout<<std::setprecision(4)<<std::fixed<<"This equation has two complex root solutions: "<<complexFirst<<" + "<<root1<<"i and "<<complexFirst<<" - "<<root2<<"i.\n";
        return 0;
    }
}
