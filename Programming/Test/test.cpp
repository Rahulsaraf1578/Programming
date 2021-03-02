//
//  test.cpp
//  Programming
//
//  Created by Rahul saraf on 28/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

#include "header.hpp"
#include <iostream>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

void test( ){
    FIO;
    int t;
    cin>>t;
    while (t--) {
        int d,c;
        cin>>d>>c;
        
        int A[3],B[3],firstSum =0,secondSum=0;
        for (int i=0; i<3; i++) {
            cin>>A[i];
            firstSum += A[i];
        }
        for (int i=0; i<3; i++) {
            cin>>B[i];
            secondSum += B[i];
        }
        
        int sumWithCoupn,sumWithoutCopun = 0;
        sumWithCoupn = firstSum +secondSum + 2*d;
        if (firstSum >= 150 && secondSum >= 150) {
            sumWithoutCopun = firstSum +secondSum + c;
        }else {
            sumWithoutCopun = firstSum +secondSum + 2*c;
        }
        
        
        if (sumWithoutCopun<sumWithCoupn) {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
        
    }
}
