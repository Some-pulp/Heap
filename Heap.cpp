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
    size = DEFAULT;
}

Heap::Heap(int size){
    arr = new int[size];
    this->size = size;
}

Heap::~Heap(){delete[] arr;}

void Heap::resize(){
    int* tmp = new int[size * 2];
    for(int i = 0; i < size; i++)
        tmp[i] = arr[i];
    
    size *= 2;
    arr = tmp;
    delete[] tmp;
}

void Heap::insert(int v){
    if(counter+1 > size)
        resize();
    
    arr[counter++] = v;
    trickleDown(v-1);
}

int Heap::remove(){
    if(counter - 1 < 0)
        throw std::length_error("the heap is empty");
    
    int greatest = arr[0];
    
    //bubbleUp();
    
    return greatest;
}

int left(int i){return 2*i+1;}

int right(int i){return 2*i+2;}

int parent(int i){return i-1/2;}



//int Heap::bubbleUp(){
    
//}

//Used in removing largest node
void Heap::trickleDown(int index){
    //Fill hole with last node added
    arr[0] = arr[size-1];
    size--;
    
    //While any leafs are greater than root value
    while(true){
    //Compare w/ children, swap root if less than children
        
    //Left
    if(arr[0] < arr[2*index+1])
        std::swap(arr[0], arr[2*index+1]);
    //Right
    if(arr[0] < arr[2*index+2])
        std::swap(arr[0], arr[2*index+2]);
    //Parent
    if(arr[0] < arr[(index-1)/2])
        std::swap(arr[0], arr[(index-1)/2]);
    }
    
}



 /*
 void trickleDown(int i) {
     do {
         int j = -1;
        //r is right node of i
         int r = right(i);
        //if right is less than counter and compare right and index is false, declare var for left
         if (r < n && compare(a[r], a[i]) < 0) {
             int l = left(i);
        //if left right compare is false j = left, else, j = r
        if (compare(a[l], a[r]) < 0) {
                 j = l;
             } else {
                 j = r;
             }
        //if right is not less than counter or compare right and index is true
         } else {
             int l = left(i);
            //if left is less than counter and compare left and index is less false, j = 1
             if (l < n && compare(a[l], a[i]) < 0) {
                 j = l;
             }
         }
        //if j >= 0, swap index and j. This logic might be backwards
         if (j >= 0)
            a.swap(i, j);
        i = j;
     } while (i >= 0);
        }
*/


