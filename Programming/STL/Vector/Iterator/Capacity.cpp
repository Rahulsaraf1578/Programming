//
//  Capacity.cpp
//  Programming
//
//  Created by Rahul saraf on 28/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

#include "header.hpp"
#include <iostream>
#include <vector>
  
using namespace std;
  
void Capacity()
{
    // Declaring vector
    vector<int> g1;
  
    // Inserting value in vector
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);
  
    // Number of elements in vector
    cout << "Size : " << g1.size();
    
    cout << "\nCapacity : " << g1.capacity();
    //Maximum number of elements a vector can hold
    cout << "\nMax_Size : " << g1.max_size();
  
    // resizes the vector size to 4
    g1.resize(4);
  
    // prints the vector size after resize()
    cout << "\nSize : " << g1.size();
  
    // checks if the vector is empty or not
    if (g1.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";
  
    // Shrinks the vector
//    Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    g1.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " ";
  
    
}
