//
//  Modifiers.cpp
//  Programming
//
//  Created by Rahul saraf on 28/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

#include "header.hpp"
#include <iostream>
#include <vector>
using namespace std;

void Modifiers( ){
    
    // Assign vector
    vector<int> v;
    
    // Fill the array with 5 ten elements
    v.assign(5, 10);
    
    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout<<endl;
    
    // Insert 15 to the last position
    v.push_back(15);
    int n = (int)(v.size());
    cout<<"The last element is "<<v[n-1]<<endl;
    
    // remove the last element
    v.pop_back();
    
    // prints the vector
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    
    // inserts 5 at the beginning
       v.insert(v.begin(), 5);
     
       cout << "\nThe first element is: " << v[0];
     
       // removes the first element
       v.erase(v.begin());
     
       cout << "\nThe first element is: " << v[0];
     
       // inserts at the beginning
       v.emplace(v.begin(), 5);
       cout << "\nThe first element is: " << v[0];
     
       // Inserts 20 at the end
       v.emplace_back(20);
       n = (int)(v.size());
       cout << "\nThe last element is: " << v[n - 1];
     
       // erases the vector
       v.clear();
       cout << "\nVector size after erase(): " << v.size();
     
       // two vector to perform swap
       vector<int> v1, v2;
       v1.push_back(1);
       v1.push_back(2);
       v2.push_back(3);
       v2.push_back(4);
     
       cout << "\n\nVector 1: ";
       for (int i = 0; i < v1.size(); i++)
           cout << v1[i] << " ";
     
       cout << "\nVector 2: ";
       for (int i = 0; i < v2.size(); i++)
           cout << v2[i] << " ";
     
       // Swaps v1 and v2
       v1.swap(v2);
     
       cout << "\nAfter Swap \nVector 1: ";
       for (int i = 0; i < v1.size(); i++)
           cout << v1[i] << " ";
     
       cout << "\nVector 2: ";
       for (int i = 0; i < v2.size(); i++)
           cout << v2[i] << " ";
}
