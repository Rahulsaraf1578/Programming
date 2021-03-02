//
//  test.cpp
//  Programming
//
//  Created by Rahul saraf on 27/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//
/**
 
 https://www.codechef.com/LTIME93C/problems/SMOL
 
 I have thought about solution correctly but  I was not able to implement it
 
 */
#include "header.hpp"
#include <iostream>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 
 
void SMOL()
{
    IOS;
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        if(k == 0)
            cout << n << endl;
        else
            cout << n % k << endl;
    }
}
