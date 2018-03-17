//  ajohar5_lab05_q1.cpp
//  Lab05
//
//  Created by Kevin Johar on 2018-03-13.
//  Copyright © 2018 Kevin Johar. all rights reserved.

//Name: Kevin Johar
//Student Number: 250 969 894
//Section: 006
//Email: ajohar5@uwo.ca

#include <iostream>
using namespace std;

//Function protypes declared
int findYearParameter(int year);
int findMonthParameter(int month);
void isLeapYear(int year, int month);
string findDayOfWeek(int result);

int sum(0);

int main() {
    //Variable declaration and initialized to initialize the while loop for input validation
    int bDate(0), bMonth(0), bYear(0);
    
    cout<<"Please enter your birthday!"<<endl;
    
    //Confirms Birth date is within 1-31
    while (!(bDate>=1 && bDate<=31)) {
        cout<<"Date from 1-31 (dd): ";
        cin>>bDate;
    }
    
    //Confirms Birth month is within 1-12
    while (!(bMonth>=1 && bMonth<=12)) {
        cout<<"\nMonth from 1-12 (mm): ";
        cin>>bMonth;
    }
    
    //Confirms Birth year is within 1900-2019
    while (!(bYear>=1900 && bYear<=2019)) {
        cout<<"\nYear from 1900-2019 (yyyy): ";
        cin>>bYear;
    }
    
    sum = findYearParameter(bYear) + bDate + findMonthParameter(bMonth);
    
    isLeapYear(bYear, bMonth);
    
    if (bYear>=2000) {
        sum+=6;
    }
    
    sum+=(bYear%100);
    
    cout<<"\n"<<"You were born on a "<<findDayOfWeek(sum)<<endl;
    
    return 0;
}

int findYearParameter(int year) {
    //Variable declaration
    int remainder, divide;
    
    remainder = year % 100;
    divide = remainder/4;
    
    //Returns calculated value
    return divide;
}

//Function that returns a value based on which month value was entered by the user
int findMonthParameter(int month) {
    switch (month) {
        case 1:
            return 1;
        case 2:
            return 4;
        case 3:
            return 4;
        case 4:
            return 0;
        case 5:
            return 2;
        case 6:
            return 5;
        case 7:
            return 0;
        case 8:
            return 3;
        case 9:
            return 6;
        case 10:
            return 1;
        case 11:
            return 4;
        case 12:
            return 6;
        default:
            return 0;
    }
}

//Function that determines whether a certain year is a leap year or not
void isLeapYear(int year, int month) {
    if (((year%400==0) || (year%4==0 && year%100!=0)) && (month==1 || month==2)) {
        sum-=1;
    }
    return;
}

//Function that finds the day of the week
string findDayOfWeek(int result) {
    //Mod 7 keeps values within values of
    sum%=7;
    
    //Switch function takes the final calculated result as a parameter to print the correct day of the week
    switch (sum) {
        case 0:
            return "Saturday";
        case 1:
            return "Sunday";
        case 2:
            return "Monday";
        case 3:
            return "Tuesday";
        case 4:
            return "Wednesday";
        case 5:
            return "Thursday";
        case 6:
            return "Friday";
        default:
            return "Error";
    }
}

