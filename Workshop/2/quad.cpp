#include<iostream>
#include<math.h>
using namespace std;

int main(){
	double a,b,c;
	cin>>a>>b>>c;
	double root1,root2;
	root1 = ((-b)+sqrt(b*b-4*a*c))/(2*a);
	root2 = ((-b)-sqrt(b*b-4*a*c))/(2*a);
	if (root2==root1)
		cout<<root1<<endl;
	else
		cout<<root1<<" "<<root2<<endl;
	return 0;
}
