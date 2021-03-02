//
//  COUPON2.cpp
//  Programming
//
//  Created by Rahul saraf on 28/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

/**
 https://www.codechef.com/START1C/problems/COUPON2
 
 */

#include "header.hpp"
#include <iostream>
using namespace std;

void COUPON2( ){
    int t;
    cin>>t;
    while (t--) {
        int d,c;
        cin>>d>>c;
        int s,f;
        int a1,a2,a3;
        int b1,b2,b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;
        s=a1+a2+a3;
        f=b1+b2+b3;
        if(s>=150 && f>=150 )
        {
            if(s+f+c<s+f+d+d)
            {
            cout<<"YES"<<endl;}
            else
            cout<<"NO"<<endl;
        }
        else if(s>=150 || f>=150 )
        {
             if(s+f+c+d<s+f+d+d)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
      
    }
}
