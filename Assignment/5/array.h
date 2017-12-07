#ifndef ARRAY_H
#define ARRAY_H

class Array{
public:
    // The constructor creates a dynamic array v[s][s], and set size to s. Then it initializes all entries v[i][j] to 0.
    Array(int s);
    // The destructor deletes v.
    ~Array();
    // replace v by the transpose of v
    void transpose();
    // return the sum of the diagonal elements of A
    int trace();
    // return v[i][j], the element at row i, column j
    int get(int i, int j);
    // return the size of this array
    int get_size();
    // set v[i][j] to value
    void set(int i, int j, int value);
    // replace v by the sum of v and B.v

    void operator +=(Array &B);
    // replace v by the sum of v and B.v (i.e. v - B.v)
    void operator -=(Array &B);
    // replace v by the product of v and B.v
    void operator *=(Array &B);
    // return true if v[i][j] is equal to B.v[i][j] for all i, j in [0,size-1]; otherwise return false
    bool operator ==(Array &B);

private:
    // For the dynamic array v. Find out how to create an dynamic 2D array yourself.
    int **v;
    // size of the array
    int size; };

#endif
