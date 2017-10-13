#include <iostream>
using namespace std;

int main(){
	int s1, s2, s3, s4;
	cout << "Input scores: ";
	cin >> s1 >> s2 >> s3 >> s4;
	int max1, max2, max;
	if (s1 >= s2)
		max1 = s1;
	else
		max1 = s2;
	if (s3 >= s4)
		max2 = s3;
	else
		max2 = s4;
	if (max1 >= max2)
		max = max1;
	else
		max = max2;
	double score = (s1 + s2 + s3 + s4 - max)/3.0;
	cout << "Final score: " << score << endl;

	return 0;
}
