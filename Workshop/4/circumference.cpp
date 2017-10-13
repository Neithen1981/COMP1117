#include<iostream>
using namespace std;

int pow(int a, int b, int r, int x, int y);

int main(){
	int a, b, r;
	cout << "Please input the center and the radius of the circle:" << endl;
	cin >> a >> b >> r;

	int x, y;
	cout << "Please input a point:" << endl;
	cin >> x >> y;

	bool on = pow(a, b, r, x, y);
	if (on)
		cout << "The point is on the circumference" << endl;
	else
		cout << "The point is not on the circumference" << endl;

	return 0;
}

int pow(int a, int b, int r, int x, int y){
	int check = (x - a) * (x - a) + (y - b) * (y - b);
	if (check == r*r)
		return 1;
	else
		return 0;
}
