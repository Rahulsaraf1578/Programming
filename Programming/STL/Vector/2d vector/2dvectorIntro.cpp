//
//  2dvectorIntro.cpp
//  Programming
//
//  Created by Rahul saraf on 01/03/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

#include "header.hpp"
#include <iostream>
#include <vector>
using namespace std;

void twodvectorIntro( ){
    /*
       We initialize a 2D vector
       named "vect" on line 16 with
       different number of values
       in each element.
       */
    
    vector<vector<int>> vect{
      
        /**Element one with 2 values in it **/
        {1,2},
        
        /** Element two with 3 values in it*/
        {3,4,5},
        
        /** Element three with 4 values in it*/
        {6,7,8,9}
        
    };
    
    /*
    Now we print the vector that we
    just defined using a simple
    nested for loop.
    */
    
    for (int i=0; i<vect.size(); i++) {
        for (int j=0; j<vect[i].size(); j++) {
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }
}
