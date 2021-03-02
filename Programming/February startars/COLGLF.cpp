//
//  COLGLF.cpp
//  Programming
//
//  Created by Rahul saraf on 01/03/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//
/**
 https://www.codechef.com/START1C/problems/COLGLF2
 */
#include "header.hpp"
#include <iostream>
using namespace std;

void COLGLF(){
    // Taking input from user
    int t;
    cin>>t;
    while (t--) {
        
        // Number of seasons we have
        int s;
        cin>>s;
        
        // Taking time peroid of intro
        int intro[s];
        for (int i=0; i<s; i++) {
            cin>>intro[i];
        }
        
        long long int total =0;
        
        for (int i=0; i<s; i++) {
            
            // Number of episode
            int ep;
            cin>>ep;
            
            for (int j=0; j<ep; j++) {
                
                int duration;
                cin>>duration;
                
                if (j==0) {
                    total = total +duration;
                }else  {
                    total = total + (duration -intro[i]);
                }
            }
        }
        cout<<total<<endl;
        
        
    }
}
