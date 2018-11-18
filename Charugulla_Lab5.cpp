//
//  main.cpp
//  Lab5
//
//  Created by Shruti Ratna on 7/1/18.
//  Copyright © 2018 Shruti Ratna. All rights reserved.
// Shruti Ratna Charugulla
// Program Status: InComplete (Header is not centre alligned)
// This program displays the months with the highest and lowest water consumption, the yearly average, and the yearly total for the
// city of Paris, Texas.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function prototypes
void userData();
void printHeaders();
void displayConsumption();
double getLowest (const double[], int, int &);
double getHighest(const double[], int, int &);
double sumArray (const double[], int);

    const int NUM_MONTHS = 12; // Number of months
    string water[NUM_MONTHS] = {"January","February","March","April","May","June","July","August","September","October","November","December"}; // Holds the monthly water consumption
    double total, // Holds the year's water consumption
           average, // Holds the average
           highest, // Holds the highest daily sales
           lowest, // Holds the lowest daily sales
           water_Consumed[NUM_MONTHS];
     int highestMonthIndex, // Holds the array element for the highest month
         lowestMonthIndex, // Holds the array element for the lowest month
         year;             // Holds the year that user inputs

    /******************************************************
                       * main *
     ******************************************************/
    int main()
    {
        userData();
        printHeaders();
        displayConsumption();
        lowest = getLowest(water_Consumed, NUM_MONTHS, lowestMonthIndex);    // Get the highest water consumption months
        highest = getHighest(water_Consumed, NUM_MONTHS, highestMonthIndex); // Get the lowest water consumption months
        total = sumArray(water_Consumed, NUM_MONTHS);                       // Get total water consumption for the year.
        average = total / NUM_MONTHS;                                       // Compute the average water consumption
            }

    /******************************************************
                    * userData *
     * This function inputs the user data for each month *
     * in the year. *
     ******************************************************/
    void userData()
    {
    // Get the water consumption data from the user
    for (int month = 0; month < NUM_MONTHS; month++)
    {cout << "Enter water consumption in CCF for "<< water[month] << ": ";
        cin >> water_Consumed[month];
        
        while (water_Consumed[month] < 0)
        {cout << "Do not enter negative numbers.Please re-enter: \n";
            cin  >> water_Consumed[month];
                }
            }
        }

    /******************************************************
                      * printHeaders *
     * This function prints the different headers for *
     * the entered data. *
     ******************************************************/
    void printHeaders()
    {
        cout << "Enter the year for which water consumption report needs to be displayed: " << endl;
        cin >> year;
        
        while (year <= 2005 || year >= 2020)
        {cout << " Enter year between 2005 and 2020.\n";
            cin >> year;
        }
        cout << endl;
        string title =  "Consumption Report for Paris, Texas \n";
        int console_width = 80; // Width of console. Default is 80.
        int len = title.length(); // Length of the string. And do this as well:
        if (len%2==0) title +=" ";
        cout << year << setw ((console_width/2)+len/2) << right << " " << title <<endl;
        
        cout << "Month\t\t\tConsumption in CCF\n";
        cout << "--------------------------------------\n";
        }

    /******************************************************
                      * displayConsumption *
     * This function displays the water consumption data *
     * entered for each month. Also displays the lowest, *
     * highest, total and average water consumption for the year.*
     ******************************************************/
    void displayConsumption()
    {
        for (int month = 0; month < NUM_MONTHS; month++)
        {cout << left << setw(13) << water[month]
            << right << setw(13) << water_Consumed[month]<< endl; }
        cout << endl;
        cout << "The lowest consumption was in " << water[lowestMonthIndex] << " with "
             << lowest << " CCF" << endl;
        cout << "The highest sconsumption was in " << water[highestMonthIndex]<<" with "
             << highest <<" CCF"<< endl;
        cout << "The total consumption for the year: "
             << total << " CCF"<<endl;
        cout << "The average consumption for the year: "
             << average <<" CCF"<< endl;
        }

    /******************************************************
                      * getlowest *
     * This function finds and returns the largest value *
     * in the array whose address is passed to it. *
     ******************************************************/
    double getLowest(const double array[], int size, int &lowestMonthIndex)
    {
        double lowest = array[0];
        lowestMonthIndex = 0;
    
        for (int count = 1; count < size; count++)
        { if (array[count] < lowest) {
            lowest = array[count];
            lowestMonthIndex = count;
        }
            }
        return lowest;
        }

   /******************************************************
                      * getHighest *
    * This function finds and returns the largest value *
    * in the array whose address is passed to it. *
    ******************************************************/
    double getHighest(const double array[], int size, int &highestMonthIndex)
    {
        double highest = array[0];
        highestMonthIndex = 0;
        
        for (int count = 1; count < size; count++)
        { if (array[count] > highest) {
                highest = array[count];
                highestMonthIndex = count;
            }
                }
        return highest;
        }

    /******************************************************
                      * sumArray *
     * This function computes and returns the sum of the *
     * values in the array whose address is passed to it. *
     ******************************************************/
    double sumArray(const double array[], int size)
    {
        double total = 0.0; // Accumulator
    
        for (int count = 0; count < size; count++)
            total += array[count];
        return total;
    }


