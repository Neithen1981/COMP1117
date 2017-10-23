#include <iostream>
#include <string>
using namespace std;

void intialize(string a[], double b[]);
void menu(string a[], double b[]);
double sub(int item, int quant, double b[]);

int main(){
	double amount = 0;
	string a[10];
	double b[10];
	intialize(a, b);

	int item, quant;
	while (true){
		menu(a, b);
		cout << "Please input the item number to purchase: ";
		cin >> item;
		if (item == 0)
			break;
		cout << "Please input the quantity: ";
		cin >> quant;
		double sub_value = sub(item, quant, b);
		cout << "$" << sub_value
			<< "is added to the total." << endl;
		amount += sub_value;
	}

	cout << "The total amount: $" << amount << endl;
	cout << "With 10\% service charge: $" << amount * 1.1 << endl;
	cout << "Thank you!" << endl;

	return 0;
}

void menu(string a[], double b[]){
	cout << "~~~~~~~Jolly Cafe~~~~~~~" << endl;
	for (int i = 0; i < 10; i ++){
		cout << i+1 << ".	" << a[i] << "	$" << b[i] << endl;
	}
	cout << "0.	check out" << endl;
}

double sub(int item, int quant, double b[]){
	return b[item-1] * quant;
}

void intialize(string a[], double b[]){
	a[0] = "Strawberry";
	a[1] = "Ice-cream";
	a[2] = "Lemon Tea";
	a[3] = "Watermelon";
	a[4] = "Cup Noodles";
	a[5] = "Banana Cake";
	a[6] = "Apple Juice";
	a[7] = "Cappuccino";
	a[8] = "Coca-cola";
	a[9] = "Grapefruit";
   b[0] = 15.5;
   b[1] = 20.0;
   b[2] = 18.2;
   b[3] = 2.5;
   b[4] = 39.9;
   b[5] = 28.0;
   b[6] = 15.8;
   b[7] = 29.0;
   b[8] = 6.5;
   b[9] = 21.0;
}
