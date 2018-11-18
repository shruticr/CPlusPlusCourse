//
//  main.cpp
//  charugulla_Lab6.2
//
//  Created by Shruti Ratna on 7/8/18.
//  Copyright © 2018 Shruti Ratna. All rights reserved.
//  Shruti Ratna Charugulla
//  Program Status: Complete
/*  A lottery ticket buyer purchases ten tickets a week, always playing the same ten five-digit “lucky” combinations.  Write a program that initializes an array with these numbers and then lets the player enter this week’s winning five-digit number.   The program should perform a "binary" search through the list of the player’s numbers and report whether or not the player is a winner this week. */

#include <iostream>
using namespace std;

// Function prototype
int binarySearch(const int [], int, int);

const int NUMS = 10;

int main()
{
    // Create an array of ticket numbers sorted in ascending order
    int Picks[NUMS] = { 13579, 26791, 26792, 33445, 55555,
        62483, 77777, 79422, 85647, 93121 };
    
    int WinNums,          // Holds the winning numbers
        results;        // Holds the search results
    
    // Ask user to enter a five-digit number
    cout << "Enter this week’s winning five-digit number: ";
    cin  >> WinNums;
    
    // Search the array for WinNums
    results = binarySearch(Picks, NUMS, WinNums);
    
    // If binarySearch returned -1, the ticket number was not found
    if (results == -1)
        cout << "That number does not exist in the array.\n";
    else
    {  // Otherwise results contains the subscript of
        // the specified ticket number
        cout << "Congratulations!\nYou have the winning five-digit number: "
        << Picks[results] << endl;
    }
    return 0;
}

/*****************************************************************
 *                         binarySearch                          *
 * This function performs a binary search on an integer array    *
 * with size elements whose values are stored in ascending       *
 * order. The array is searched for the number stored in the     *
 * value parameter. If the number is found, its array subscript  *
 * is returned. Otherwise, -1 is returned.                       *
 *****************************************************************/
int binarySearch(const int array[], int size, int value)
{
    int  first = 0,                     // First array element
         last = size - 1,               // Last array element
         middle,                        // Midpoint of search
    position = -1;                      // Position of search value
    bool found = false;                 // Flag
    
    while (!found && first <= last)
    {
        middle = (first + last) / 2;    // Calculate midpoint
        if (array[middle] == value)     // If value is found at mid
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value) // If value is in lower half
            last = middle - 1;
        else
            first = middle + 1;         // If value is in upper half
    }
    return position;
}

