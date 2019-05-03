//
//  Heap.cpp
//  Heap
//
//  Created by Peter ODonnell on 5/3/19.
//  Copyright © 2019 Peter ODonnell. All rights reserved.
//

#include <iostream>
#include <stdexcept>
#include <algorithm>
#include "Heap.h"

using namespace std;

int const DEFAULT = 16;

Heap::Heap(){
    arr = new int[DEFAULT];
    root = nullptr;
}

Heap::Heap(int size){
    arr = new int[size];
    root = nullptr;
}

void Heap::resize(){
    int* tmp = new int[size * 2];
    for(int i = 0; i < size; i++)
        tmp[i] = arr[i];
    
    size *= 2;
    arr = tmp;
    delete[] tmp;
}

void Heap::insert(int v){
    if(counter > size)
        resize();
    
    bubbleUp(v);
}

int Heap::remove(){
    if(counter <= 0)
        throw std::length_error("the heap is empty");
    return trickleDown();
}

void Heap::bubbleUp(int i){
    
    
}

int Heap::trickleDown(){
    
    
}
