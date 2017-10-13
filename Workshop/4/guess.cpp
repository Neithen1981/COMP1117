#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(NULL));
	int answer = rand() % 100;

	cout << "Please input a number between 1-100" << endl;
	int guess;
	cin >> guess;

	int min = 1;
	int max = 100;

	while (guess != answer){
		if (guess < answer)
			min = guess;
		else
			max = guess;
		cout << "Try agian! Please input a number between "
		<< min << "-" << max << endl;
		cin >> guess;
	}
	cout << "Bingo!" << endl;

	return 0;
}
