#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream score_stream;
	score_stream.open("data.txt");
	int score[100] = {0};
	int num;
	score_stream >> num;

	for (int i = 0; i < num; i ++)
		score_stream >> score[i];

	int max = 0, min = 100;

	for (int i = 0; i < num; i ++){
		if (max < score[i])
			max = score[i];
	}

	for (int i = 0; i < num; i ++){
		if (min > score[i])
			min = score[i];
	}

	double sum;
	for (int i = 0; i < num; i ++)
		sum += score[i];

	double avg = sum/num;

	cout << "The average mark is: " << avg << endl;
	cout << "The highest mark is: " << max << endl;
	cout << "The lowest mark is: " << min << endl;

	return 0;
}
