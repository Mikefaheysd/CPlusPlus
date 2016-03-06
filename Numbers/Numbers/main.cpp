//
//  main.cpp
//  Numbers
//
//  Created by Michael Fahey on 3/6/16.
//  Copyright © 2016 Michael Fahey. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int wholeNumber = 7;
    double decimal = 5.3;
    float floatingPoint = 6.778;
    
    cout << "int contains whole numbers. For example: " << wholeNumber << endl;
    cout << "double contains decimal numbers. For example: " << decimal << endl;
    cout << "float contains decimal numbers. For example: " << floatingPoint << endl;
    cout << "float is not as accurate " << setprecision(10) << fixed << floatingPoint << endl;
    cout << "double is much more accurate! " << setprecision(10) << fixed << decimal << endl;
    cout << "Scientific notation: " << scientific << floatingPoint << endl;
    
    return 0;
}
