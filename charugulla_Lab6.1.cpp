//
//  main.cpp
//  charugulla_Lab6
//
//  Created by Shruti Ratna on 7/8/18.
//  Copyright © 2018 Shruti Ratna. All rights reserved.

//  Shruti Ratna Charugulla
//  Program Status: Complete
/*  A lottery ticket buyer purchases ten tickets a week, always playing the same ten five-digit “lucky” combinations.  Write a program that initializes an array with these numbers and then lets the player enter this week’s winning five-digit number.   The program should perform a "linear" search through the list of the player’s numbers and report whether or not the player is a winner this week. */

#include <iostream>
using namespace std;

int linearList(int [], int, int);           // Function Prototypes

int main()
{
    const int NUMS = 10;
    int Picks[NUMS] = { 13579, 26791, 26792, 33445, 55555,
        62483, 77777, 79422, 85647, 93121 };
    
    int WinNums,        // Holds winning numbers
        Results;            // Holds search results
    
    // Ask user to enter a five-digit number
    cout << "Enter this week’s winning five-digit number: ";
    cin  >> WinNums;
    
    // Search the array for WinNums
    Results = linearList(Picks, NUMS, WinNums);
    
    // Report whether or not one of the tickets is a winner this week.
    if (Results == -1)
        cout << "Sorry, no winning ticket this week.\n";
    else
    {
        cout << "Congratulations!\nYou have the winning five-digit number: "
        << Picks[Results] << endl;
    }
    
    return 0;
}
/*******************************************************************************
 *                                    linearList                               *
 * This function performs a linear search on an integer array. The list array, *
 * which has size elements, is searched for the number stored in value. If the *
 * number is found, its array subscript is returned. Otherwise -1 is returned. *
 *******************************************************************************/
int linearList(int list[], int size, int value)
{
    int index = 0;            // Used as a subscript to search array
    int position = -1;        // Used to record position of search value
    bool found = false;        // Flag to indicate if the value was found
    
    while (index < size && !found)
    {
        if (list[index] == value)    // If the value is found
        {
            position = index;        // Record the value's subscript
            found = true;            // Set flag
        }
        index++;                    // Go to next element
    }
    return position;                // Return the position, or -1
}
