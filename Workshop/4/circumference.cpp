#include <iostream>
#include <cmath>
using namespace std;

int check(int a, int b, int r, int x, int y);

int main(){
	int a, b, r;
	cout << "Please input the center and the radius of the circle:" << endl;
	cin >> a >> b >> r;

	int x, y;
	cout << "Please input a point:" << endl;
	cin >> x >> y;

	bool on = check(a, b, r, x, y);
	if (on)
		cout << "The point is on the circumference" << endl;
	else
		cout << "The point is not on the circumference" << endl;

	return 0;
}

int check(int a, int b, int r, int x, int y){
	int check = pow(x - a, 2) + pow(y - b, 2);
	if (check == pow(r, 2))
		return 1;
	else
		return 0;
}
