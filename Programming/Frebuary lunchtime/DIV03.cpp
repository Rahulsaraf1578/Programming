//
//  test1.cpp
//  Programming
//
//  Created by Rahul saraf on 27/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

#include "header.hpp"
#include <iostream>
using namespace std;

void test1( ){
    int t;
    cin>>t;
    while (t--) {
        int arr[13];
        for (int i=1; i<=10; i++) {
            cin>>arr[i];
        }
        int k;
        cin>>k;
//        int flag = 0;
        int index = 0;
        for (int i=10;i>0; i--) {
             if(arr[i]>=k && k!=0){
                k= arr[i]-k;
//                 cout<<"K1 "<<k<<" i "<<i<<endl;
             }
            if(k>=arr[i]){
               k= k-arr[i];
//                cout<<"K2 "<<k<<" i "<<i<<endl;
            }
            else if (k == 0&& arr[i] != 0) {
                index = i;
//                cout<<"Index:" <<index+1<<endl;
                break;
            }
            else if(k == 0 || arr[i] != 0){
                index = i;
                cout<<index<<endl;
            }
    
//            }else if(arr[i]<k){
//
//                k = k -arr[i];
//                cout<<"k "<<k<<endl;
//            }
//            else if(k ==0 && (arr[i-1]!=0  || arr[i] != 0)){
//                if (arr[i]<k) {
//                    cout<<index<<endl;
//
//                }
//            }
//            else if(arr[i]>k){
//                k= arr[i]-k;
//            }else{
//                k = k -arr[i];
//            }
//
             }
      
        
    }
}
