//
//  main.cpp
//  Charugulla_Lab7
//
//  Created by Shruti Ratna on 7/15/18.
//  Copyright © 2018 Shruti Ratna. All rights reserved.
// Shruti Ratna Charugulla
// Program Status: Complete
//  Write a program that will be used to gather statistical data about the number of movies college students see in a month.  The program should ask the user how many students were surveyed and dynamically allocate an array of that size.  The program then should allow the user to enter the number of movies each student has seen.  It should then sort the scores and calculate the average.

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getData(int *, int);
void selectionSort(int *, int);
void display(int*, double, int);
double getAverageNumberOfMovies(int *, int);


int main()
{
    int *numberOfMoviesPerStudent, numberOfStudents;
    double averageNumberOfMovies;
    
    // Ask user how many students were surveyed.
    cout << "How many students were surveyed? ";
    cin >> numberOfStudents;
    
    while (numberOfStudents < 0) {
        cout<<"The number of students that were surveyed must be a positive integer.\n"<<std::endl;
        cout << "How many students were surveyed? ";
        cin >> numberOfStudents;
    }
    
    numberOfMoviesPerStudent = new int[numberOfStudents];
    
    getData(numberOfMoviesPerStudent, numberOfStudents);
    selectionSort(numberOfMoviesPerStudent, numberOfStudents);
    averageNumberOfMovies = getAverageNumberOfMovies(numberOfMoviesPerStudent, numberOfStudents);
    
    display(numberOfMoviesPerStudent, averageNumberOfMovies, numberOfStudents);
    
    delete [] numberOfMoviesPerStudent;
    numberOfMoviesPerStudent = 0;
    
    return 0;
}

//*******************************************************************************
//                                  getData                                     *
// The function asks the user to enter the survey data and stores it in an      *
// integer array. The size parameter holds the size of the array.               *
//*******************************************************************************
void getData(int *array, int size)
{
    cout << "Enter the number of movies each student has seen in the month.\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Student " << (i + 1) << ": ";
        cin  >> *(array + i);
        while (*(array + i) < 0) {
            cout<<"The number of movies that each student has seen in the month must be a positive integer.\n"<<std::endl;
            cout << "Enter the number of movies each student has seen in the month.\n";
            cout << "Student " << (i + 1) << ": ";
            cin  >> *(array + i);
        }
        
    }
}
//*******************************************************************************
//                                    selectionSort                             *
// This function performs an ascending-order selection sort on array. The       *
// parameter size holds the number of elements in the array.                    *
//*******************************************************************************
void selectionSort(int *array, int size)
{
    int scan, minIndex, minValue;
    
    for (int scan = 0; scan < (size - 1); scan++)
    {
        minIndex = scan;
        minValue = *(array + scan);
        for (int i = scan + 1; i < size; i++)
        {
            if (*(array + i) < minValue)
            {
                minValue = *(array + i);
                minIndex = i;
            }
        }
        *(array + minIndex) = *(array + scan);
        *(array + scan) = minValue;
    }
}
//*******************************************************************************
//                                    display                                   *
// This function displays the array in ascending order                          *
//*******************************************************************************

void display(int * array, double averageNumberOfMoviesPerStudent, int numberOfStudents)
{
    cout << "\n";
    cout << "Number of Movies Watched\n";
    cout << "-------------------------\n";
    
    for (int i = 0; i < numberOfStudents; i++) {
        cout << array[i] <<std::endl;
    }
    
    cout << "-------------------------\n";
    cout << fixed << showpoint << setprecision(1);
    cout << "Average   " << averageNumberOfMoviesPerStudent << endl;
    return;
}
//*******************************************************************************
//                                  getAverageNumberOfMovies                    *
// This function calculates and returns the average of the values in array. The *
// parameter size holds the number of elements in array.                        *
//*******************************************************************************
double getAverageNumberOfMovies(int *array, int size)
{
    double Sum = 0;
    for (int i = 0; i < size; i++)
    {
        Sum += *(array +i);
    }
    return Sum / size;
}
