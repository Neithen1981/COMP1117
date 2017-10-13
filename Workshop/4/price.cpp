#include<iostream>
using namespace std;

double tax(double n);

double hkdollar(double n);

int main(){
	double yen;
	cout << "Please input the price in yen" << endl;
	cin >> yen;

	double tax_in_yen = tax(yen);
	double tax_in_hkd = hkdollar(yen+tax_in_yen);

	cout << "The tax (in yen):" << tax_in_yen << endl;
	cout << "The amount in HK$" << tax_in_hkd << endl;
}

double tax(double n){
	return n*0.08;
}

double hkdollar(double n){
	return n*774.2/10000;
}
