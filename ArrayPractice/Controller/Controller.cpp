//
//  Controller.cpp
//  ArrayPractice
//
//  Created by Schimel, Dustin on 2/6/18.
//  Copyright © 2018 Schimel, Dustin. All rights reserved.
//

#include "Controller.hpp"
#include <vector>
#include <iostream>

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    int firstArray [100];
    double secondArray [5];
    string thirdArray [10];
    
    for (int index = 0; index < 100; index++)
    {
        firstArray[index] = index;
    }
    
    secondArray[2] = 3.14;
    
    thirdArray[0] = "My favorite";
    
    thirdArray[10] = "food";
    
    cout << thirdArray[0] << " " << thirdArray[10] << " is " << secondArray[2] <<
    " and my favorite number is " << firstArray[6] << endl;
}
