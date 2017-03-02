//
//  StringController.cpp
//  funWithStrings
//
//  Created by Adams, Kyle on 2/2/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#include <iostream>
#include "StringController.hpp"

using namespace std;

void StringController :: start()
{
    derp = "this string sucks";
    test1 = "lalaland got pranked this year";
    test2 = "the oscars still suck";
    this->stringOutput();
    this->intStringOutput();
    this->stringCounter();
    this->subString();
    this->stringCompare();
    this->emptyChecker();
}

void StringController :: stringOutput()
{
    char stringOne[100] = "This string is awesome";
    cout << stringOne << endl;
    
    char stringTwo[5] = {'H', 'e', 'l', 'l', 'o',};
    cout << stringTwo << ", you saw my second string!" << endl;
}

void StringController :: intStringOutput()
{
    char stringInts[5] = {'1', '2', '3', '4', '5',};
    cout << stringInts << ", here is my integer string" << endl;
}
void StringController :: stringCounter()
{
    string stringThree ("Bloody amazing counted string!!!!!");
    cout << "This string has a size of " << stringThree.length() << " charactors" << endl;
}

void StringController :: subString()
{
    string temp = derp.substr(3);
    cout << temp << endl;
    
    string cool = derp.substr(3, 7);
    cout << cool << endl;
}

void StringController :: stringCompare()
{
    if (test1 == test2)
        cout << test1 << " is the same as " << test2 << endl;
    else
        cout << test1 << " isn't the same as " << test2 << endl;
}

void StringController :: emptyChecker()
{
    /*This method uses the empty() feature in a different way.  It uses an empty line with no text to trigger the end of the method/program */
    
        string content;
        string line;
        cout << "Please introduce a text. Enter an empty line to finish:\n";
        do {
            getline(cin,line);
            content += line + '\n';
        } while (!line.empty());
        cout << "The text you introduced was:\n" << content;
    
    }

