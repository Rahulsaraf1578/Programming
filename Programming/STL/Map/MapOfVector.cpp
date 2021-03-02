//
//  MapOfVector.cpp
//  Programming
//
//  Created by Rahul saraf on 28/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

#include "header.hpp"
#include <iostream>
#include <vector>
#include <map>
using namespace std;

void MapOfVector( ){
    
    // Declaring a vector
    vector<int> temp = {1,2,3};
    
    // Declaring a map
    map<int, vector<int>> Mp;
    
    // Inserting value in map
    Mp[1] = temp;
    
    temp = {4,5,6};
    Mp[2] = temp;
    
    temp = {7,8,9};
    Mp[3] = temp;
    
    for (auto w: Mp) {
        cout<<w.first<<"-> ";
        
        for (auto x: w.second) {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    
    
}
