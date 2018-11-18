//
//  main.cpp
//  Lab7
//
//  Created by Shruti Ratna on 7/21/18.
//  Copyright © 2018 Shruti Ratna. All rights reserved.
//
// Shruti Ratna Charugulla
// Program Status: Complete
// Word Separator – Write a program that accepts as input a sentence with all the words running together, but the first character of each word is an uppercase letter and stores it in the form of a string object.  Convert the sentence to a string in which the words are separated by spaces and only the first word starts with an uppercase letter.    For example, the string “StopAndSmellTheRoses” would be converted to “Stop and smell the roses”.     Note:  += operator can be used with strings.

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

// function prototype
void wordSep(string&);

int main()
{
    string input = "StopAndSmellTheRoses";                // sample user input
    cout << "Original sentence: " << input << endl;
    wordSep(input);
    cout << "New sentence: " << input << endl;            // display new formatted sentence
    return 0;
}
/************************************************************
                        wordSep
 converts input to a string where words are separated by
 spaces and only the first word starts with a capital letter
 *************************************************************/

void wordSep(string &input)
{
    char tempLetter;                                    //temporarily stores a letter from &input
    int length;
    length = input.size();                              // get original length to use in the loop
    
    
    for (int count = 1; count < length; count++)        // count starts at 1 to ignore first word(1st capitalization)
    {
        tempLetter = input[count];
        if (isupper(tempLetter))                        // if uppercase character is found add a space
        {
            input.insert(count, 1 ,' ');
            ++count;                                    //after insertion of a space character we need to add 1 to the index
            
            input[count] = tolower(input[count]);       //set the letter to lowercase (b/c only first word starts with an uppercase letter)
        }
    }
}
