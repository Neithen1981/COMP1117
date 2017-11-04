//Lu Kexin 3035329869

#include <iostream>
using namespace std;

const int SIZE = 4;

void transpose(int A[SIZE][SIZE], int B[SIZE][SIZE]);
/*
find the transpose of A.
Function Task: Flip the content of A over its diagonal,
which covers the entries A[i][j] for  0 <= i <= (SIZE - 1).
*/

void add(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]);
/*
find the addition of A and B.
Function Task: add two arrays A and B
such that when the function returns C[i][j] = A[i][j] + B[i][j];
for 0 <= i <= (SIZE – 1), and 0 <= j <= (SIZE – 1);
*/

void multi(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]);
/*
find the multiplication and A and B.
Function Task: When the function returns, we have
𝐶[𝑖][𝑗] = ∑ 𝐴[𝑖][𝑘] × 𝐵[𝑘][𝑗]
*/

void ouput_matrix(int A[SIZE][SIZE]);
//print the matrix A onto the screen

void input_matrix(int A[SIZE][SIZE]);
//deal with the user's input and store the integers into A

void initialize(int A[SIZE][SIZE]);
//initialize every value in A to be 0


int main(){
	int A[SIZE][SIZE] = {0};
	int B[SIZE][SIZE] = {0};
	int C[SIZE][SIZE] = {0};

	cout << "Please input the number of an operation (0.Stop; 1.Transpose; 2.Addition; 3.Multiplication):"
		<< endl;

	int command = 1;
	cin >> command;

	while (command != 0){

		//Case: Transpose
		if (command == 1){
			cout << "Please input an 4*4 two-dimensional array of integer:"
				<< endl;
			input_matrix(A);
			transpose(A, B);
			cout << "Output:" << endl;
			ouput_matrix(B);
		}

		//Case: addition
		if (command == 2){
			cout << "Please input two 4*4 two-dimensional arrays of integer:"
				<< endl;
			input_matrix(A);
			input_matrix(B);
			add(A, B, C);
			cout << "Output:" << endl;
			ouput_matrix(C);
		}

		//Case: multiplication
		if (command == 3){
			cout << "Please input two 4*4 two-dimensional arrays of integer:"
				<< endl;
			input_matrix(A);
			input_matrix(B);
			multi(A, B, C);
			cout << "Output:" << endl;
			ouput_matrix(C);
		}

		//intialize the three matrices after one coputation
		initialize(A);
		initialize(B);
		initialize(C);

		cout << "Please input the number of an operation (0.Stop; 1.Transpose; 2.Addition; 3.Multiplication):"
			<< endl;
		cin >> command;
	}

	return 0;
}

void transpose(int A[SIZE][SIZE], int B[SIZE][SIZE]){
	for (int i = 0; i < SIZE; i ++){
		for (int j = 0; j < SIZE; j ++){
			B[i][j] = A[j][i];
		}
	}
}

void add(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]){
	for (int i = 0; i < SIZE; i ++){
		for (int j = 0; j < SIZE; j ++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}

void multi(int A[SIZE][SIZE], int B[SIZE][SIZE], int C[SIZE][SIZE]){
	for (int i = 0; i < SIZE; i ++){
		for (int j = 0; j < SIZE; j ++){
			for (int k = 0; k < SIZE; k++){
				C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
			}
		}
	}
}

void ouput_matrix(int A[SIZE][SIZE]){
	for (int i = 0; i < SIZE; i ++){
		for (int j = 0; j < SIZE-1; j ++){
			cout << A[i][j] << " ";
		}
		cout << A[i][SIZE-1] << endl;
	}
}

void input_matrix(int A[SIZE][SIZE]){
	for (int i = 0; i < SIZE; i ++){
		for (int j = 0; j < SIZE; j ++){
			cin >> A[i][j];
		}
	}
}

void initialize(int A[SIZE][SIZE]){
	for (int i = 0; i < SIZE; i ++){
		for (int j = 0; j < SIZE; j ++){
			A[i][j] = 0;
		}
	}
}