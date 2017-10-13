#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	double i=1;
	//check if it's a perfect square
	for (i;(i*i)<=n;i++){
		if (i*i == n){
			cout<<i<<endl;
			break;
		}
	}
	if (i*i!=n){
		i--;
		while (i*i<=n)
			i+=0.0001;
		cout<<i<<endl;
	}
	return 0;
}
