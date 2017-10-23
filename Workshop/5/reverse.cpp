#include <iostream>
using namespace std;

void input(int a[]);
int getEnd(int a[]);
void rev(int a[], int l);
void output(int a[], int l);

int main(){
	int a[20] = {0};
	input(a);
	int l = getEnd(a);
	rev(a, l);
	output(a, l);

	return 0;
}

void input(int a[]){
	for (int i = 0; i < 20; i++){
		cin >> a[i];
		if (a[i] == -1)
			break;
	}
}

void output(int a[], int l){
	for (int i = 0; i <= l; i++)
		cout << a[i] << " ";
}

int getEnd(int a[]){
	for (int i = 0; i < 20; i ++){
		if (a[i] == -1)
			return i-1;
	}
	return 19;
}

void rev(int a[], int l){
	int f = 0;
	while (f < l){
		swap(a[f++], a[l--]);
	}
}

inline swap(int &a, int &b){
	int temp = a;
	a = b;
	b = temp;
}
