//
//  main.cpp
//  Lab8.2
//
//  Created by Shruti Ratna on 7/27/18.
//  Copyright © 2018 Shruti Ratna. All rights reserved.
//

// File Decryption:  Write a program that decrypts the file produced by the program in Prog. 1.  The decryption program should read the contents of the coded file, restore the information to its original state and write it to another file.  Example: If you added 10 to each character in the first program, subtract 10 from each character in this program.  (The output file of program 2 should be the same as the input file of program 1)

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string ecrypted, decrypt;
    char ch;
    
    // Ask user to enter the name of file to decrypt
    cout << "Enter name of file to decrypt: ";
    cin  >> ecrypted;
    
    fstream inFile(ecrypted, ios::in);
    if (!inFile)
    {
        cout << "Error opening file \"" << ecrypted << "\".\n";
        return 0;
    }
    
    cout << "Enter name for decrypted file: ";
    cin  >> decrypt;
    fstream outFile(decrypt, ios::out);
    
    while (!inFile.fail())
    {
        inFile.get(ch);
        ch -= 10;
        outFile << ch;
    }
    
    inFile.close();
    outFile.close();
    return 0;
}
