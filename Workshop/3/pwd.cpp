#include<iostream>
using namespace std;

int main(){
	bool lowercase = false, uppercase = false,
		digit = false, symbol = false;
	int count = 0;
	char input='0';
	cin>>input;
	for(input;input != '!'; cin >> input){
		if (input >= 48 && input <= 57)
			digit = true;
		else if (input >= 65 && input <= 90)
			uppercase = true;
		else if (input >= 97 && input <= 122)
			lowercase = true;
		else
			symbol = true;
		count++;
	}
	if (count > 6)
		cout << '*';
	if (uppercase)
		cout << '*';
	if (lowercase)
		cout << '*';
	if (digit)
		cout << '*';
	if (symbol)
		cout << '*';
	return 0;

	//simplify: count the number of stars
}
