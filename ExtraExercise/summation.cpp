//So now I understand how silly I was...
//The suggested solution is presented below:

/*
int main()
{
	int n;

	cin >> n; 

	while (n >= 10)
	{
		
		int m = 0;

		while (n > 0)
		{
			m += n % 10;
			n /= 10;
		}

		n = m;

        cout << n << ' ';
	}

	cout << endl;

	return 0;
}
*/

//Original solution:
#include <iostream>
using namespace std;

//store s into n[]
void build_arry(int n[], int s, int l);
//add everything in n[]
int add(int n[], int l);
//check if n[] is less than 10 or not
int check(int n[], int l);

int main(){
	int sum = 0;
	cin >> sum;

	int* number = NULL;

	int length = 0;
	int nsum = sum;
	while (nsum != 0){
		nsum = nsum / 10;
		length ++;
	}

	number = new int[length];

	do{
        cout << sum << " ";
        build_arry(number, sum, length);
		sum = add(number, length);
    }
    while (check(number, length));

    delete [] number;

	return 0;
}

void build_arry(int n[], int s, int l){
	int k = l - 1;
	while (k >= 0){
        n[k] = s % 10;
        s = (s - n[k]) / 10;
        k --;
	}
}

int add(int n[], int l){
	int m = 0;
	for (int i = 0; i < l; i ++)
		m += n[i];
	return m;
}

int check(int n[], int l){
	for (int i = 0; i < l - 1; i ++){
		if (n[i] != 0)
			return 1;
	}

	return 0;
}

//In fact there is no need to use dynamic array here,
//because I use int to store the input.
//Anyway, it makes the code tighter and more transportable.

