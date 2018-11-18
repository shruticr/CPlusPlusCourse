//
//  main.cpp
//  charugulla_lab4
//
//  Created by Shruti Ratna on 6/24/18.
//  Copyright © 2018 Shruti Ratna. All rights reserved.
//
// Shruti Ratna Charugulla
// Program Status: Complete
// This program has a class called Population that stores current population, annual number of births, and an annual number of deaths for some geographic area. It calculates the birth rate and death rate of a specific area that the user inputs with a given population.

#include <iostream>
#include <iomanip>
using namespace std;

class Population
{
private:
    int pop;
    int births;
    int deaths;
    
public:
    void setPop (int);
    void setBirths(int);
    void setDeaths(int);
    
    int getPop();
    double getBirthRate();
    double getDeathRate();
    
Population() : pop(2), births(0), deaths(0) {}
};
void Population::setPop(int p)
{pop = p;}

void Population::setBirths(int b)
{births = b;}

void Population::setDeaths(int d)
{deaths = d;}

int Population::getPop()
{return pop;}

double Population::getBirthRate()
{return births / static_cast<double>(pop);}

double Population::getDeathRate()
{return deaths / static_cast<double>(pop);}

/*********************** main ****************************/
int main()
{
    Population myCity;             // instantiate one Population object
    int  numPeople;
    int  numBirths,
         numDeaths;

    // Input, validate, and set values for myCity
    cout << "Enter total population: ";
    cin  >> numPeople;
    while (numPeople < 2)
    {   cout << "Value must be greater than 2.  Please re-enter: ";
        cin  >> numPeople;
    }
    myCity.setPop(numPeople);
    
    cout << "Enter annual number of births: ";
    cin  >> numBirths;
    while (numBirths < 0)
    {   cout << "Value cannot be negative.  Please re-enter: ";
        cin  >> numBirths;
    }
    myCity.setBirths(numBirths);
    
    cout << "Enter annual number of deaths: ";
    cin  >> numDeaths;
    while (numDeaths < 0)
    {   cout << "Value cannot be negative.  Please re-enter: ";
        cin  >> numDeaths;
    }
    myCity.setDeaths(numDeaths);
    
    // Print population statistics for myCity
    cout << "\nPopulation Statistics  "<< endl;
    cout << fixed << showpoint  << setprecision(3);
    cout << "\n\tPopulation:  " << setw(7) << myCity.getPop();
    cout << "\n\tBirth Rate:  " << setw(7) << myCity.getBirthRate();
    cout << "\n\tDeath Rate:  " << setw(7) << myCity.getDeathRate() << endl;

    return 0;
    }

