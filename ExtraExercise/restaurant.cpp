#include <iostream>
using namespace std;

int serve(int capacity[], int customer_now[], int i, int m, int n);

int main(){
	int capacity[3];
	cout << "Please input the capacities of zone A, J and W respectively: ";
	cin >> capacity[0] >> capacity[1] >> capacity[2];

	int customer_now[3] = {0};
	bool open = true;

	while (open){
		cout << "Please input your command: ";
		char command;
		int customer;
		cin >> command;
		if (command == 'Q'){
			open = false;
			cout << "Seats left: A " << customer_now[0] << " J "
				<< customer_now[1] << " W " << customer_now[2]
				<< endl;
		}
		else{
			int change;
			cin >> change;
			if (command == 'A')
				customer_now[0] = serve(capacity, customer_now, 0, customer_now[0], change);
			else if (command == 'J')
				customer_now[1] = serve(capacity, customer_now, 1, customer_now[1], change);
			else
				customer_now[2] = serve(capacity, customer_now, 2, customer_now[2], change);
		}

	}

	return 0;
}

int serve(int capacity[], int customer_now[], int i, int m, int n){
	if (n < 0){
		m = m + n;
		cout << "Thank you and please come again. " << endl;
	}
	else{
		if (m + n <= capacity[i]){
			m = m + n;
			cout << "Welcome to Jimmy’s restaurant." << endl;
		}
		else
			cout << "Sorry, we do not have enough seats. " << endl;
	}
	return m;
}
