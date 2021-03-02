//
//  test.cpp
//  Programming
//
//  Created by Rahul saraf on 27/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

#include "header.hpp"
#include <iostream>
using namespace std;

void test( ){
    ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n,k;
            cin>>n>>k;
            int flag = n,flag2 = k;
        //    int count =0;
            if (n>k) {
            
                    n = n%2;
                
                cout<<n<<endl;
            }
            else if(n == k){
                cout<<0<<endl;
            }
            if (flag<flag2) {
                cout<<flag<<endl;
            }
    }
    
    
    
}
