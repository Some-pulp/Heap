//
//  Heap.h
//  Heap
//
//  Created by Peter ODonnell on 5/3/19.
//  Copyright © 2019 Peter ODonnell. All rights reserved.
//
//  Heap.h implements a largest max-heap

#include "node.h"


using namespace std;

#ifndef Heap_h
#define Heap_h

class Heap{
private:
    int* arr;
    int counter = 0;
    int size;
public:
    Heap();
    Heap(int size);
    ~Heap();
    
    void insert(int v);
    int remove();
    int largest();
    
    void resize();
    void bubbleUp(int i);
    int trickleDown();
    int left(int i);
    int right(int i);
    int parent(int i);
};

#endif /* Heap_h */
