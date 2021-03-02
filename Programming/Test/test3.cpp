//
//  test3.cpp
//  Programming
//
//  Created by Rahul saraf on 28/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

#include "header.hpp"
#include <iostream>
using namespace std;

void test3( ){
    int t,diff;
    cin>>t;
    while (t--) {
        int size;
        cin>>size;
        int arr[size];
        for (int i=0; i<size; i++) {
            cin>>arr[i];
        }
        int fina = 0;
        for (int i=0; i<size-1; i++) {
            for (int j=i+1; j<size; j++) {
                diff = arr[i]*arr[j] + max(arr[i]-arr[j],arr[j]-arr[i]);
                fina = max(fina,diff);
            }
        }
        diff = arr[0]*arr[size-1]+max(fina,diff);
        cout<<diff<<endl;
    }
}
