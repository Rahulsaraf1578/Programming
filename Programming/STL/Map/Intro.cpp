//
//  Intro.cpp
//  Programming
//
//  Created by Rahul saraf on 28/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

#include "header.hpp"
#include <iostream>
#include <map>
#include <string>
using namespace std;

void intro( ){
    
    // declare map
    map<int, int > m;
    
    m[1] = 1;
    m[2] = 2;
    m[3] = 3;
    
    for (auto a: m) {
        cout<<a.first<<" "<<a.second<<endl;
    }
    
    map<int , string> s;
    
    s[1] = "Rahul";
    s[2] = "Krishna";
    s[3] = "Akhil";
    s[4] = "Anisha";
    
    for (auto x: s) {
        cout<<x.first << " " <<x.second<<endl;
    }
}
