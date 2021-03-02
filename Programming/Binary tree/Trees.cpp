//
//  Trees.cpp
//  Programming
//
//  Created by Rahul saraf on 02/03/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//
/**
 The maximum number of nodes at level ‘l’ of a binary tree is 2l.
 Level of the root is 0.
 
 The Maximum number of nodes in a binary tree of height ‘h’ is 2h – 1. 
 
 */
#include "header.hpp"
#include <iostream>
using namespace std;

struct Node{
  
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int val){
        this->data = val;
        
        // Left and right child will be initialised to zero
        left = NULL;
        right = NULL;
    }
};

void firsttree( ){
    /*create root*/
    struct Node* root = new Node(1);
    /* following is the tree after above statement
    
                1
               / \
             NULL NULL
       */
    
    root->left = new Node(2);
    root->right = new Node(3);
       /* 2 and 3 become left and right children of 1
                       1
                     /    \
                    2       3
                  /  \     /  \
               NULL NULL  NULL NULL
       */
    
       root->left->left = new Node(4);
       /* 4 becomes left child of 2
                  1
               /     \
              2       3
             / \     / \
            4  NULL NULL NULL
           / \
        NULL NULL
       */
    

}
