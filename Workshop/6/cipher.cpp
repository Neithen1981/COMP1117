#include <iostream>
using namespace std;

char cipher[2][26] = {{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'},{'z', 'e', 'b', 'r', 'a', 's', 'c', 'd', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 't', 'u', 'v', 'w', 'x', 'y'}};

int input(char m[], int size);
void decrpt(char m[], int size);
void encrpt(char m[], int size);
void output(char m[], int size);

int main(){
	cout << "menu" << endl;
	cout << "------------" << endl;
	cout << "0	Decryption" << endl;
	cout << "1	Encryption" << endl;
	cout << "Please select 0/1: ";
	int command;
	cin >> command;
	cout << "Please input the message: " << endl;

	char message[100] = {0};
	int length = input(message, 100);

	if (command == 0)
		decrpt(message, length);
	else
		encrpt(message, length);

	output(message, length);

	return 0;
}

int input(char m[], int size){
    int i;
	for (i = 0; i < size; i ++){
		cin >> m[i];
		if (m[i] == '!')
			break;
	}
	return i;
}

void decrpt(char m[], int size){
	for (int i = 0; i < size; i ++){
		for (int j = 0; j < 26; j ++){
			if (m[i] == cipher[0][j]){
				m[i] = cipher[1][j];
				break;
			}
		}
	}
}

void encrpt(char m[], int size){
	for (int i = 0; i < size; i ++){
		for (int j = 0; j < 26; j ++){
			if (m[i] == cipher[1][j]){
				m[i] = cipher[0][j];
				break;
			}
		}
	}
}

void output(char m[], int size){
	for (int i = 0; i < size; i ++){
		cout << m[i];
	}
}
