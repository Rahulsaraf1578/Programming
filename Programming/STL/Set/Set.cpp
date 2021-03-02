//
//  Set.cpp
//  Programming
//
//  Created by Rahul saraf on 28/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

#include "header.hpp"
#include <iostream>
#include <set>
using namespace std;

void Setintro( ){
    // Declare the set
    
    set<int> S;
    
      // Inserting values in set
      S.insert(3);
      S.insert(-1);
      S.insert(3);
      S.insert(4);
    
      // Iterate using value in set
      for (auto it : S) {
    
          // Print the elements
          cout << it << ' ';
      }
}
