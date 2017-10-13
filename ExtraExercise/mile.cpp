#include<iostream>
using namespace std;

int main(){
	double kilometer, mile;
	cout << "Input the distance in kilometer: ";
	cin >> kilometer;
	mile = kilometer * 3937 / 6336;
	cout << "Distance in mile: " << mile << endl;

	return 0;
}
