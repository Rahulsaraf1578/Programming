//
//  SEDMAX.cpp
//  Programming
//
//  Created by Rahul saraf on 28/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

/**
 https://www.codechef.com/LTIME93C/problems/SEDMAX
 
 
 */

#include "header.hpp"
#include <iostream>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define int long long

void SEDMAX( ){
    FIO;
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin>>arr[i];
        }
        
        sort(arr, arr+n);
        int cost = arr[n-1] -arr[n-2];
        cout<<cost;
    }
}
