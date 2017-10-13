#include<iostream>
using namespace std;

int main(){
	char a,b,c;
	cin>>a>>b>>c;
	int A,B,C;
	A=a-'0';
	B=b-'0';
	C=c-'0';
	if (C%2==0)
		cout<<'*'<<'*';
	if (A%2==0)
		cout<<'*';
	if (B%2==0)
		cout<<'*'<<endl;
	return 0;
}