//
//  dequeintro.cpp
//  Programming
//
//  Created by Rahul saraf on 28/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

#include "header.hpp"
#include <iostream>
#include <deque>
using namespace std;

void dequeintro( ){
    
    // Declare the deque
      deque<int> dq;
    
      // Inserting values in deque
      dq.push_front(1);
      dq.push_front(2);
      dq.push_front(3);
    
      dq.push_back(4);
      dq.push_back(5);
      // Iterate using value in set
      for (auto it : dq) {
    
          // Print the elements
          cout << it << ' ';
      } 
}
