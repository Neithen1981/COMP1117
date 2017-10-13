#include<iostream>
using namespace std;

int main(){
	double number;
	cin>>number;
	if (number>0) cout<<"It is a positive number"<<endl;
	else if (number<0) cout<<"It is a negative number"<<endl;
	else cout<<"It is zero."<<endl;
	return 0;
}