//
//  SearcInMatrix.cpp
//  Programming
//
//  Created by Rahul saraf on 01/03/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

#include "header.hpp"
#include <iostream>
#include <vector>
using namespace std;

int search(vector<vector<int>> mat,int num){
    
    if(mat.size() == 0){
        return -1;
    }
    
    for (int i=0; i<mat.size(); i++) {
        for (int j=0; j<mat[i].size(); j++) {
            if (mat[i][j] == num) {
                cout<<"Element found at:"<<i<<","<<j<<endl;
                return 1;
            }
        }
    }
    cout<<"Element not found"<<endl;
    return 0;
}

void SearcInMatrix( ){
    
    vector<vector<int>> vect{
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };
    
    search(vect, 29);
}
