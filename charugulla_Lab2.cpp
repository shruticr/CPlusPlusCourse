//
//  main.cpp
//  Charugulla_Lab2
//
//  Created by Shruti Ratna on 6/10/18.
//  Copyright © 2018 Shruti Ratna. All rights reserved.
//
// Software Sales Program
// Shruti Ratna Charugulla
// Program Status: Complete
// This program determines and displays the discounts that are obtained by purchasing a specific quantity of units. The retail price that the software company sells the package is for $199.
//******************************************************************

#include <iostream>                          // input/output declarations
#include <iomanip>
using namespace std;

int main()
{
    const double RETAIL_PRICE = 199;        // Create named constant for retail price
    
    int Quantity;                           // Holds the quantity that the user inputs
    double RetailCost = 0.0,                // Initialize the retail cost of the units
    total;                              // Holds the total cost
    
    // Get the number of units/quantity purchased
    cout << "How many units are being purchased? ";
    cin  >> Quantity;
    
    // Determine the retail cost based on the discounts mentioned.
    // Calculate the total cost of the units purchased.
    // And print the total cost of the purchase.
    if (Quantity > 0)
    {
        RetailCost = Quantity * RETAIL_PRICE;
        cout << fixed << showpoint << setprecision(2);
    }
    if (Quantity >= 10 && Quantity <= 19)
    {
        total = RetailCost - (RetailCost * .20);
        cout << "The total cost of the purchase is $" << total << endl;
    }
    else if (Quantity >= 20 && Quantity <= 49)
    {
        total = RetailCost - (RetailCost * .30);
        cout << "The total cost of the purchase is $" << total << endl;
    }
    else if (Quantity >= 50 && Quantity <= 99)
    {
        total = RetailCost - (RetailCost * .40);
        cout << "The total cost of the purchase is $" << total << endl;
    }
    else if (Quantity >= 100)
    {
        total = RetailCost - (RetailCost * .50);
        cout << "The total cost of the purchase is $" << total << endl;
    }
    else
        cout << "The total cost of the purchase is $" << RetailCost << endl;
    
    return 0;
}
