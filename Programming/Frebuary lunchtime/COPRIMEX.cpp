//
//  COPRIMEX.cpp
//  Programming
//
//  Created by Rahul saraf on 28/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

/**
 https://www.codechef.com/LTIME93C/problems/COPRIMEX
 
 1≤T≤1,000
 2≤L≤R≤10^6
X must not exceed  2*10^9
 
Approach :-
 1. If the number is greater than range
 
 EX:- We are given l,r as [2,3] then if we take 4 then our range cannot have a factor greater than 3.
 
 But we have to also satisfy the condition that it has no common factor
 so to do that we take a prinme number
 
 2. X is a prime
 
 So in constraint we can see that X is greater than R
 which can take a maximum value of 10^6
 so if we find a prime after 10^6 than it will satisfy for all number
 so first prime after 10^6 is  1000003
 
 So we have used a prime function to find out the prime number
 */


#include "header.hpp"
#include <iostream>
using namespace std;

#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define int long long

bool is_prime(int ans ){
    // Here i*i means upto square root of number
    for (int i=2; i*i<=ans; i++) {
        if (ans%i == 0) {
            return false;
        }
    }
    return true;
}

void COPRIMEX( ){
    
    // This we have to find the prime number after 10^6 i.e. 1000003
    FIO;
//    int ans = 1000000;
//    while (1) {
//        if (is_prime(ans)) {
//            break;
//        }
//        ans++;
//        cout<<ans<<endl;
//    }
    
    int t;
    cin>>t;
    while (t--) {
        cout<<1000003<<endl;
    }
    
}
