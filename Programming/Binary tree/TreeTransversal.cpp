//
//  TreeTransversal.cpp
//  Programming
//
//  Created by Rahul saraf on 02/03/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

/**
 
 
              1
            /        \
           2          3
          /   \       /       \
         4      5   NULL NULL
        
 */

#include "header.hpp"
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int value){
        this->data = value;
        left = NULL;
        right = nullptr;
    }
};

/* Given a binary tree, print its nodes according to the
"bottom-up" postorder traversal. */
void printPostorder(struct Node* node)
{
    if (node == NULL)
        return;
  
    // first recur on left subtree
    printPostorder(node->left);
  
    // then recur on right subtree
    printPostorder(node->right);
  
    // now deal with the node
    cout << node->data << " ";
}

/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct Node* node)
{
    if (node == NULL)
        return;
  
    /* first recur on left child */
    printInorder(node->left);
  
    /* then print the data of node */
    cout << node->data << " ";
  
    /* now recur on right child */
    printInorder(node->right);
}
  

/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;
  
    /* first print data of node */
    cout << node->data << " ";
  
    /* then recur on left sutree */
    printPreorder(node->left);
  
    /* now recur on right subtree */
    printPreorder(node->right);
}

void TreeTransversal( ){
    
    struct Node* root = new Node(1);
    
    root -> left = new Node(2);
    root -> right = new Node(3);
    
    root -> left -> left = new Node( 4);
    root -> left -> right = new Node (5);
    
    root -> right -> left = new Node( 6);
    root -> right -> right = new Node (7);
    
    printPostorder(root);
    cout<<endl;
    printInorder(root);
    cout<<endl;
    printPreorder(root);
    cout<<endl;
}
