/******************
* Name: Lu Kexin  *
* UID: 3035329869 *
*******************/

#include <iostream>
#include "array.h"
using namespace std;

/* You should implement the functions input and output */
void input(Array &C) {
    for(int i =0; i < C.get_size(); i++){
        for(int j =0; j < C.get_size(); j++){
            int temp;
            cin >> temp;
            C.set(i, j, temp);
        }
    }
}

void output(Array &C) {
    for(int i =0; i < C.get_size(); i++){
        for(int j =0; j < C.get_size()-1; j++){
            cout << C.get(i, j) << " ";
        }
        cout << C.get(i, C.get_size()-1) << endl;
    }
}

int main(void) {
    // input size
    int size;
    cout << "Please input array size:" << endl;
    cin >> size;

    // input A, B
    Array A(size), B(size);
    cout << "Please input " << size << "x" << size << " integer array A:" << endl;
    input(A);
    cout << "Please input " << size << "x" << size << " integer array B:" << endl;
    input(B);

    int op;
    bool stop = false;
    while (!stop)  {
        cout << "Please input operation number (0. Stop; 1. Transpose; 2. Addition; 3. Subtraction; 4. Product; 5. Trace; 6. Equality):" << endl;
        cin >> op;
        switch (op){
            case 0:
                // Stop
                stop = true;
                break;
            case 1:
                // Transpose
                A.transpose();
                output(A);
                break;
            case 2:
                // Addition
                A += B;
                output(A);
                break;
            case 3:
                // Subtraction
                A -= B;
                output(A);
                break;
            case 4:
                // Product
                A *= B;
                output(A);
                break;
            case 5:
                // Trace
                cout << A.trace() << endl;
                break;
            case 6:
                // Equality
                if (A == B)
                    cout << "A is equal to B" << endl;
                else
                    cout << "A is not equal to B" << endl;
                break;
        }
    }
    return 0;
}
