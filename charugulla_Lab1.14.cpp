//
//  main.cpp
//  charugulla_Lab1.14
//
//  Created by Shruti Ratna on 6/3/18.
//  Copyright © 2018 Shruti Ratna. All rights reserved.
//
// Basketball Player Height Program
// Shruti Ratna Charugulla
// Program Status: Complete
// This program computes and displays the height of a 74 inch basketball player in feet / inches form.
//******************************************************************

#include <iostream>             // input/output declarations
using namespace std;

int main()
{
    int Feet   = 74 / 12,       // Compute the height in feet
    Inches = 74 % 12;           // Compute the height in inches
    
    // Print the height of the player in feet/inch form.
    cout << "A 74 inch tall basketball player is " << Feet << " feet " << Inches << " inches tall."<< endl;
    return 0;
}
