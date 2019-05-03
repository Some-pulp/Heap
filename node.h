//
//  node.h
//  Heap
//
//  Created by Peter ODonnell on 5/3/19.
//  Copyright © 2019 Peter ODonnell. All rights reserved.
//

#ifndef node_h
#define node_h

class node{
private:
    int val;
    node* left;
    node* right;
    node* parent;
public:
    node();
    int getVal();
    void setVal(int v);
    node* getLeft();
    node* getRight();
    node* getParent();
};

node::node(){left = right = parent = nullptr;}
int node::getVal(){return val;}
void node::setVal(int v){val = v;}
node* node::getLeft(){return left;}
node* node::getRight(){return right;}
node* node::getParent(){return parent;}


#endif /* node_h */
