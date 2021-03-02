//
//  test1.cpp
//  Programming
//
//  Created by Rahul saraf on 27/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

/**
 https://www.codechef.com/LTIME93C/problems/DIV03
 
 I have thought about solution correctly but  I was not able to implement it
 */

#include "header.hpp"
#include <iostream>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mod 1000000007

void DIV03( ){
   
    FIO;
    int t;
    cin>>t;
    
    while(t--)
    {
    int arr[11];
    
    for(int i=1;i<=10;i++)
    {
        cin>>arr[i];
    }
    
    int k;
    cin>>k;
    
    for(int i=10;i>0;i--)
    {
        int temp=min(arr[i],k);
        arr[i]-=temp;
        k-=temp;
    }
    
    for(int i=10;i>0;i--)
    {
        if(arr[i]!=0){
            cout<<i<<"\n";
            break;
         }
    }
}
}
