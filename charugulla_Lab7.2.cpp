//
//  main.cpp
//  C-strings2
//
//  Created by Shruti Ratna on 7/22/18.
//  Copyright © 2018 Shruti Ratna. All rights reserved.
//
// Shruti Ratna Charugulla
// Program Status: Complete
// Case Manipulator – Write a program with three functions:  upper, lower, and flip.  Each function should accept a C-string as an argument.  The upper function should step through all the characters in the string, converting each to uppercase.  The lower function,  should step through all the characters in the string converting, each to lowercase.   The  flip  steps through the string, testing each character to determine whether it is upper or lowercase.   If upper, it should convert to lower.  If lower, it should convert to upper.The main function should accept one string from the user, then pass it to each of the functions. Output:   The original string, the uppercase, lowercase, and flipped case strings should all be displayed.

#include <iostream>
using namespace std;

void flip(char *);                                  // Determines character casing, changing upper- to lowercase letters
                                                    // and vice versa */

void lowercase(char *);                             // Converts all characters from upper- to lowercase

void uppercase(char *);                             // Converts all characters from lower- to uppercase

int main()
{
    const int MAX_CHARS = 501;
    char         sentence[MAX_CHARS];
    
    cout << "\n\tCASE MANIPULATOR\n\n\t"
    << "Enter a sentence, " << (MAX_CHARS - 1)
    << " characters in length or lesser.\n\n";
    
    cout << "\n\tPlease enter your sentence:\n\t";
    cin.getline(sentence, MAX_CHARS);
    
    cout << "\n\n\tCHARACTER CASE REVERSAL\n";
    flip(sentence);
    
    cout << "\n\tAll character cases have been reversed:\n"
    << "\t" << sentence << "\n\n";
    
    cout << "\n\tCHARACTERS TO LOWERCASE:\n";
    lowercase(sentence);
    
    cout << "\n\tAll uppercase characters have been changed "
    << "to lowercase:\n"
    << "\t" << sentence << "\n\n";
    
    cout << "\n\tCHARACTERS TO UPPERCASE:\n";
    uppercase(sentence);
    
    cout << "\n\tAll lowercase characters have been changed "
    << "to uppercase:\n"
    << "\t" << sentence << "\n\n";
    
    return 0;
}

/* **********************************************************
 Definition: flip
 
 This function accepts a pointer to a C-string as argument.
 It reverses all upercase characters to lowercase and vice
 versa.
 ********************************************************** */

void flip(char *senPtr)
{
    for (size_t index = 0; senPtr[index] != '\0'; index++)
    {
        if (isupper(senPtr[index]))
        {
            senPtr[index] = tolower(senPtr[index]);
        }
        
        else if (islower(senPtr[index]))
        {
            senPtr[index] = toupper(senPtr[index]);
        }
    }
}

/* **********************************************************
 Definition: lowercase
 
 This function accepts a pointer to a C-string as argument.
 It converts all characters from upper- to lowercase.
 ********************************************************** */

void lowercase(char *senPtr)
{
    for (size_t index = 0; senPtr[index] != '\0'; index++)
    {
        if (isupper(senPtr[index]))
        {
            senPtr[index] = tolower(senPtr[index]);
        }
    }
}

/* **********************************************************
 Definition: uppercase
 
 This function accepts a pointer to a C-string as argument.
 It converts all characters from lower- to uppercase.
 ********************************************************** */

void uppercase(char *senPtr)
{
    for (size_t index = 0; senPtr[index] != '\0'; index++)
    {
        if (islower(senPtr[index]))
        {
            senPtr[index] = toupper(senPtr[index]);
        }
    }
}
