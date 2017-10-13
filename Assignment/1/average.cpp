//Absolutely no UID here~

#include <iostream>
using namespace std;

int main(){
	int a=0,b=0,c=0;
	cin>>a>>b>>c;
	double average = 0;
	if ((a<=b) && (a<=c))
		average=(b+c)/2.0;
	else if ((b<=a) && (b<=c))
		average=(a+c)/2.0;
	else
		average=(a+b)/2.0;
	cout<<average<<endl;
	return 0;
}