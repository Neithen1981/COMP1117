//Lu Kexin 3035329869

#include <iostream>
using namespace std;

bool judgeDivisible (unsigned int inter, unsigned int digit);
// It returns whether the inter can be divisible by the digit. 
// For example, if inter is 13 and digit is 3, then the function returns False.

bool judgeDigitEqual (unsigned int inter, unsigned int digit);
// It returns whether at least one digit of inter is equal to the digit. 
// For example, if inter is 13 and digit is 3, then the function returns True.

bool judgeInteresting (unsigned int inter, unsigned int digit);
// It returns whether the inter is interesting for the digit. 
// For example, if inter is 13 and digit is 3, then the function returns True. 


int main(){
	int N;
	cin >> N;

	unsigned int inter, digit;
	while (N > 0){
		cin >> inter >> digit;
		//check interesting
		if (judgeInteresting(inter, digit))
			cout << "interesting" << endl;
		else
			cout << "not interesting" << endl;
		N --;
	}
	return 0;
}

bool judgeDivisible (unsigned int inter, unsigned int digit){
	if (inter % digit == 0)
		return true;
	else
		return false;
}

bool judgeDigitEqual (unsigned int inter, unsigned int digit){
	while (inter > 0){
		//get every digit from the number
		int check_now = inter % 10;
		inter = (inter - check_now) / 10;
		if (check_now == digit)
			return true;
	}
	return false;
}

bool judgeInteresting (unsigned int inter, unsigned int digit){
	if (judgeDivisible(inter, digit))
		return true;
	else if (judgeDigitEqual(inter, digit))
		return true;
	else
		return false;
}