/******************
* Name: Lu Kexin  *
* UID: 3035329869 *
*******************/

#include <iostream>
#include "array.h"
using namespace std;

Array::Array(int s){
    // Allocate memory for the 2D array
    v = new int *[s];
    for (int i = 0; i < s; i++){
        v[i] = new int[s];
    }
    // Initialize
    for (int i = 0; i < s; i++){
        for (int j = 0; j < s; j++){
            v[i][j] = 0;
        }
    }

    size = s;
}

// The destructor  deletes v.
Array::~Array(){
    for (int i = 0; i < size; i++){
        delete v[i];
        v[i] = NULL;
    }
    delete[] v;
    v = NULL;
}

//replace v by  the  transpose of  v
void Array::transpose(){
    for (int i = 0; i < size; i ++){
        for (int j = 0; j < i; j ++){
            // Swap the elements
            int temp = v[i][j];
            v[i][j] = v[j][i];
            v[j][i] = temp;
        }
    }
}

//  return  the  sum  of the  diagonal  elements  of  A
int Array::trace(){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += v[i][i];
    }
    return sum;
}

// return  v[i][j], the  element  at row i, column  j
int Array::get(int i, int j){
    return v[i][j];
}

// return  the  size  of  this  array
int Array::get_size(){
    return size;
}

// set v[i][j] to  value
void Array::set(int i,  int j,  int value){
    v[i][j] = value;
}

//  replace  v  by  the  sum  of  v  and  B.v
void Array::operator +=(Array &B){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            v[i][j] += B.v[i][j];
        }
    }
}

//  replace  v  by  the  sum  of  v  and  B.v  (i.e.  v  -  B.v)
void Array::operator -=(Array &B){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            v[i][j] -= B.v[i][j];
        }
    }
}

//  replace  v  by  the  product  of  v  and  B.v
void Array::operator *=(Array  &B){
    // Create another matrix to store the product
    Array C(size);
    for (int i = 0; i < size; i ++){
        for (int j = 0; j < size; j ++){
            for (int k = 0; k < size; k++){
                C.v[i][j] = C.v[i][j] + (v[i][k] * B.v[k][j]);
            }
        }
    }
    // copy to v
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            v[i][j] = C.v[i][j];
        }
    }
}


// return true if  v[i][j] is equal  to B.v[i][j]  for all  i,  j in [0,size-1]; otherwise  return false
bool Array::operator ==(Array  &B){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
            // any index is not equal, then return false
            if (v[i][j] != B.v[i][j])
                return false;
        }
    }
    // all are equal
    return true;
}
