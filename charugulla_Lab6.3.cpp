//
//  main.cpp
//  charugulla_Lab6.3
//
//  Created by Shruti Ratna on 7/8/18.
//  Copyright © 2018 Shruti Ratna. All rights reserved.
//
// Shruti Ratna Charugulla
// Program Status: Complete
// This program uses bubble sort method to sort the shopping list items.

#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    const int SIZE = 9;                     // variable declaration
    string shoppingList[SIZE] = {"eggplant", "squash", "apples" , "hamburger", "pizza", "shampoo", "soap", "laundry detergent", "bacon"};
    string temp;
    
    // print the sorted list
    cout<< "The shopping list items in sorted order: "<<endl;
    
    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE -1; j++)
        {
            if(shoppingList[j+1] < shoppingList[j])
            {
                temp = shoppingList[j];
                shoppingList[j] = shoppingList[j+1];
                shoppingList[j+1] = temp;
            }
        }
    
    for(int i = 0; i < SIZE; i++)
        cout<< shoppingList[i] <<" "<< endl;
    
    return 0;
}


