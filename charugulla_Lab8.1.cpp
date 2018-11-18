//
//  main.cpp
//  Lab8
//
//  Created by Shruti Ratna on 7/27/18.
//  Copyright © 2018 Shruti Ratna. All rights reserved.
//
// Shruti Ratna Charugulla
// Program Status: Complete
// File encryption is the science of writing the contents of a file in a secret code.   Your encryption program should work like a filter reading the contents of one file, modifying each character in the input file into a code, and then writing the coded characters out to a second file.  The second file will be a version of the first file but written in a secret code.

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main () {
    
    std::string fileName, encrypt;
    char ch;
    
    // Ask the user to enter the name of the unencrypted file
    cout << "Enter the name of the file to encrypt: ";
    cin  >> fileName;
    cout << "Enter name for encrypted file: ";
    cin  >> encrypt;
    
    fstream inFile(fileName,ios::in);
    
    if (!inFile) {
        std::cout<<"Could not open file"<<std::endl;
    }
    
    fstream outFile(encrypt, ios::out);
    
    if (!outFile) {
        std::cout<<"Could not open out file"<<std::endl;
    }
    
    while (!inFile.fail())
    {
        inFile.get(ch);
        ch += 10;
        outFile << ch;
    }
    
    inFile.close();
    outFile.close();
    
    return 0;
}
