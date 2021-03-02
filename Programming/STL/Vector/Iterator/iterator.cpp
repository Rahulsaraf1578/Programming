//
//  iterator.cpp
//  Programming
//
//  Created by Rahul saraf on 28/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

#include "header.hpp"
#include <iostream>
#include <vector>
using namespace std;

void iterate( ){
    
    // Declare the vector
    vector<int> arr = {1,2,3,4,4};
    
    // Traversing the vector using
      // values directly
    for (auto it : arr) {
    
          // Print the values
        cout << it << ' ';
    }
    cout<<endl;
}
