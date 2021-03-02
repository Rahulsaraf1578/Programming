//
//  GraphFirst.cpp
//  Programming
//
//  Created by Rahul saraf on 01/03/21.
//  Copyright © 2021 Rahul saraf. All rights reserved.
//

#include "header.hpp"
#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> vect[],int u,int v){
    vect[u].push_back(v);
    vect[v].push_back(u);
}

void PrintGraph(vector<int> adj[],int size){
    
    for (int i=0; i<size; i++) {
        
        cout << "\n Adjacency list of vertex "
        << i << "\n head ";
        for (auto x: adj[i]) {
            cout<<"->"<<x;
        }
        
    }
    
}

void GraphFirst( ){
    
    int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    PrintGraph(adj, V);
}
