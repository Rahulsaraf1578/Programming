//
//  AVGSORT.cpp
//  Programming
//
//  Created by Rahul saraf on 28/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

/***
 https://www.codechef.com/LTIME93C/problems/AVGSORT
 
 If x>y then after any number of operation x>=y
 
 if we want to make an array strictly increasing
 
 x x z
 
 then z should be greater then x only then we can make it strictly increasing
 
 x x+z/2 z
 
 // Important ****************
 If a array is strictly decreasing then at most we can make it elements equal
 So we just have to check that if the array is not strictly decresing then we print yes othersiwe false
 
 */

#include "header.hpp"
#include <iostream>
using namespace std;

void AVGSORT( ){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin>>arr[i];
        }
        int flag =0;
        for (int i=0; i<n-1; i++) {
            if (arr[i]<arr[i+1]) {
                flag =1;
            }
        }
        if (flag == 1) {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }
}

