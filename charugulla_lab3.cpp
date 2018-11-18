//
//  main.cpp
//  Lab3
//
//  Created by Shruti Ratna on 6/17/18.
//  Copyright © 2018 Shruti Ratna. All rights reserved.
//
// Shruti Ratna Charugulla
// Program Status: Complete
// This program determines which of a company’s four divisions (Northeast, Southeast, Northwest, and Southwest) had the greatest sales for a quarter. It should include two functions that are called by main:  getSales and findHighest.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Create function prototypes
double getSales(string);
void findHighest(double, double, double, double);

int main()
{
    double NE, SE, NW, SW;
    
    // Call function getSales for each division.
    NE = getSales("Northeast");
    SE = getSales("Southeast");
    NW = getSales("Northwest");
    SW = getSales("Southwest");
    
    // Call function findHighest passing the four divisions sales totals
    findHighest(NE, SE, NW, SW);
    return 0;
}
// This function is passed the name of a division. Ask the user for that division's quarterly sales figure, validate the input,
// then return it.
double getSales(string Division)
{
    double Sales;
    
    do
    {
        cout << "Enter the quarterly sales for the " << Division;
        cout << " division: ";
        cin  >> Sales;
        
        if (Sales < 0.00)
            cout << "Sales figures cannot be negative. Please re-enter.\n";
        
    } while (!(Sales > 0.00));
    return Sales;
}

// Determine the highest and print the name of the highest grossing divison, along with its sales figures.

void findHighest(double NE, double SE, double NW, double SW)
{
    double Highest;
    
    cout << "\nThe ";
    
    if (NE > SE && NE > NW && NE > SW)
    {
        Highest = NE;
        cout << "Northeast ";
    }
    else if (SE > NE && SE > NW && SE > SW)
    {
        Highest = SE;
        cout << "Southeast ";
    }
    else if (NW > SE && NW > NE && NW > SW)
    {
        Highest = NW;
        cout << "Northwest ";
    }
    else
    {
        Highest = SW;
        cout << "Southwest ";
    }
    
    cout << fixed << showpoint << setprecision(2);
    cout << "division had the highest sales this quarter. \nTheir sales were $" << Highest << "\n";
    }
