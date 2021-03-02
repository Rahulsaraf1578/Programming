//
//  DefiningATwoDvector.cpp
//  Programming
//
//  Created by Rahul saraf on 01/03/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

#include "header.hpp"
#include <iostream>
#include <vector>
using namespace std;

void DefiningATwoDvector( ){
    
    int n = 4;
    int m = 5;
    
    vector<vector<int>> vect(n,vector<int> (m));
    
//    for (int i=0; i<vect.size(); i++) {
//        for (int j=0; j<vect[i].size(); j++) {
//            vect[i][j] = j + i + 1;
//        }
//    }
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            vect[i][j] = j + i + 1;
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
    
}
