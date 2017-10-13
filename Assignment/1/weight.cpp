//Absolutely no UID here~

#include <iostream>
using namespace std;

int main(){
	int value;
	char unit;
	cin>>value>>unit;
	double output=0;
	if (unit=='l'){
		output=value/2.2;
		cout<<value<<"lb = "<<output<<"kg"<<endl;
	}
	else if (unit=='k'){
		output=value*2.2;
		cout<<value<<"kg = "<<output<<"lb"<<endl;
	}
	return 0;
}