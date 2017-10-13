#include<iostream>
using namespace std;

int main(){
	int count = -1;
	for(char input;input != '!'; cin >> input)
		count ++;
    cout << count << endl;
	return 0;
}
