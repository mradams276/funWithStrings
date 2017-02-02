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
    this->stringOutput();
    this->stringCounter();
    this->subString();
}

void StringController :: stringOutput()
{
    char stringOne[100] = "This string is awesome";
    cout << stringOne << endl;
    
    char stringTwo[5] = {'H', 'e', 'l', 'l', 'o',};
    cout << stringTwo << ", you saw my second string!" << endl;
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
}
