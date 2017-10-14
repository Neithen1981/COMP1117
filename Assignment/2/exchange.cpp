//Absolutely no UID~

#include <iostream>
using namespace std;

int main(){
	int cur_type, value;
	const double CNY = 118.99, JPY = 7.02, GBP = 1058.09, USD = 781.62;
	double hkd;

	cin >> cur_type >> value;

	if (cur_type == 0)
		hkd = (value / 100.0) * CNY;
	else if (cur_type == 1)
		hkd = ( value / 100.0) * JPY;
	else if (cur_type == 2)
		hkd = (value / 100.0) * GBP;
	else if (cur_type == 3)
		hkd = (value / 100.0) * USD;

	cout << hkd << " HKD" <<endl;

	return 0;
}