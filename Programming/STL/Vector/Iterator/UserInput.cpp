//
//  UserInput.cpp
//  Programming
//
//  Created by Rahul saraf on 28/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

#include "header.hpp"
#include <iostream>
using namespace std;
#include <vector>

void UserInput( ){
    
    vector<int> arr;
    
    int num = 0;
    for (int i=0; i<10; i++) {
        cin>>num;
        arr.push_back(num);
    }
    
    for (auto e: arr) {
        cout<<e<<" ";
    }
    cout<<endl;
}
