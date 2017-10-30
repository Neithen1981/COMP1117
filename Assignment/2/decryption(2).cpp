//Absolutely no UID~

#include<iostream>
using namespace std;

/*
change the decimal part to be the correct value
input: the decimal part represented as an integer 
output: the real decimal part
*/
double manipulate(double n);

int main(){
	int int_1 = 0, int_2 = 0;
	double deci_1 = 0, deci_2 = 0;

	char input;
	cin >> input;

	//store the message before + in the first number
	while (input != '+'){
		if (input != '.'){
			int now = input - 'a';
			int_1 = int_1 * 10 + now;
			cin >> input;
		}
		else{
			cin >> input;
			while (input != '+'){
				int now = input - 'a';
				deci_1 = deci_1 * 10 + now;
				cin >> input;
			}
		}			
	}

	//store the message between + and = in the second number
	cin >> input;
	while (input != '='){
		if (input != '.'){
			int now = input - 'a';
			int_2 = int_2 * 10 + now;
			cin >> input;
		}
		else{
			cin >> input;
			while (input != '='){
				int now = input - 'a';
				deci_2 = deci_2 * 10 + now;
				cin >> input;
			}
		}
	}

	double number1 = int_1 + manipulate(deci_1);
	double number2 = int_2 + manipulate(deci_2);

	cout << number1 + number2 <<endl;

	return 0;
}


double manipulate(double n){
	while (n >= 1){
		n = n / 10;
	}

	return n;
}
