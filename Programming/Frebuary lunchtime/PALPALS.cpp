//
//  PALPALS.cpp
//  Programming
//
//  Created by Rahul saraf on 28/02/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

/**
 https://www.codechef.com/LTIME93C/problems/PALPALS
 
 Our task is to divide the string into contiguous substring of length greater than or equal to two, such that every substring is a palindrome.

 If there is a palindromic substring and we delete the leftmost and the rightmost character from this substring, the resulting substring will remain palindromic. It means to create a palindromic substring of length xx, we need to create a palindromic substring of a smaller length too. Hence the most optimal way to divide the string is in the smallest length possible which is 22.

 Dividing the string SS into substrings of length 22 will also increase palindromic substrings which will be useful when we need to insert the odd character in these substrings as explained later.

 Now we will try to form palindromic substrings of length 22. We can see that, if any letter is present an odd number of times in this string then a single character of this letter won’t be able to form a palindromic substring of length 22. But all such characters can be inserted in between substring of length 22 since the addition of this character won’t make the substring non-palindromic. It means that there should be enough substrings such that all such characters could be inserted.

 Let us suppose the count of such characters is yy. Now if the number of substrings of length 22 is more than or equal to yy, then it is always possible to insert such characters in between the substrings making the substring still palindromic. If such conditions satisfy then it is possible to rearrange the letters of string SS to obtain a Palpal string.
 */

#include "header.hpp"
#include <iostream>
using namespace std;

void PALPALS( ){
    ios_base::sync_with_stdio(0);
     cin.tie(0);
    
     int t;
     cin>>t;
    
     while(t--)
     {
       string s;
       cin>>s;
    
       int n=(int)(s.size());
    
       int count[26]={};
         
//         Counting number of characters
       for(int i=0;i<(int)s.size();i++)
       {
         count[s[i]-'a']++;
       }
    
       int odd=0;
    
//         Characters which are occuring odd number of times
       for(int i=0;i<26;i++)
       {
         if(count[i]%2!=0)
         {
           odd++;
         }
       }
    
       int total=n-odd;
       total/=2;
    
       if(total<odd)
       {
         cout<<"NO"<<"\n";
       }
       else
       {
         cout<<"YES"<<"\n";
       }
     }
    
}

