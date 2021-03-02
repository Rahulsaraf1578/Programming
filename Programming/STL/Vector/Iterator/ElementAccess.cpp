//
//  ElementAccess.cpp
//  Programming
//
//  Created by Rahul saraf on 28/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

#include "header.hpp"
#include <iostream>
#include <vector>
  
using namespace std;

void ElementAccess( ){
    
    vector<int> g1;
    
    for (int i=1; i<=10; i++) {
        g1.push_back(i*10);
    }
    
    cout << "\nReference operator [g] : g1[2] = " << g1[2];
     
    cout << "\nat : g1.at(4) = " << g1.at(4);
     
    cout << "\nfront() : g1.front() = " << g1.front();
     
    cout << "\nback() : g1.back() = " << g1.back();
     
    // pointer to the first element
    int* pos = g1.data();
     
    cout << "\nThe first element is " << *pos;
}
