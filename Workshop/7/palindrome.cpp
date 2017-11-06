#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string word;
	cin >> word;

	int l = word.length();
	bool palindrome = true;

	for (int i = 0; i <= l/2; i ++){
		if (word[i] != word[l - i -1]){
			palindrome = false;
			break;
		}
	}

	if (palindrome)
		cout << word << " is a palindrome!" << endl;
	else
		cout << word << " is not a palindrome!" << endl;

	return 0;
}
