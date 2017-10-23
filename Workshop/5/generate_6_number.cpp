#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(NULL));
	int num[6] = {0};

	for (int i = 0; i < 6; i ++){
		num[i] = (rand() % 49) + 1;
		for (int j = 0; j < i; j ++){
			while (num[i] == num[j])
				num[i] = (rand() % 49) + 1;
		}
	}

	for (int i = 0; i < 6; i ++){
		cout << num[i] << endl;
	}

	return 0;
}
