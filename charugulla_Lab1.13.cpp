//  main.cpp
//  Lab1
//
//  Created by Shruti Ratna on 6/3/18.
//  Copyright © 2018 Shruti Ratna. All rights reserved.
//
// Pay Period Gross Pay Program
// Shruti Ratna Charugulla
// Program Status: Complete
// This program determines and displays the amount of an employee's gross pay for each pay period if he is paid twice a month (24 pay checks per year) and if he is paid bi-weekly (26 checks per year). The annual salary is $39,000.
//******************************************************************

#include <iostream>         // input/output declarations
using namespace std;

int main()
{
    double Annual     = 39000,          // Set up annual salary
    BiMTH    = Annual / 24,             // Calculate bi-monthly salary
    BiWeek     = Annual / 26;           // Calculate bi-weekly salary
    
    // Print the annual salary, gross pay per bi-monthly and gross pay per bi-weekly
    cout << "Annual Gross Salary               = $" << Annual << endl;
    cout << "Gross pay per bi-monthly paycheck = $" << BiMTH << endl;
    cout << "Gross pay per bi-weekly paycheck  = $" << BiWeek << endl;
    return 0;
}
