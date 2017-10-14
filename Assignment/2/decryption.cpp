//Absolutely no UID~

#include <iostream>
#include <cstdlib>
using namespace std;

/*
translate the characters into numbers and keep the decimal point unchanged
input: char array
*/
void translate(char (&str)[1000]);

int main(){
	char input;
	cin >> input;

	char str1[1000] = {0}, str2[1000] = {0};
	int i = 0;
	//store the first message in str1
	while (input != '+'){
        str1[i] = input;
        cin >> input;
        i ++;
	}
	i = 0;
	//store the second message in str2
    while (input != '='){
        str2[i] = input;
        cin >> input;
        i ++;
    }

    //do translation
    translate(str1);
    translate(str2);

    //change char array to a double 
    double number1 = atof(str1);
    double number2 = atof(str2);

    cout << number1 + number2 << endl;

    return 0;
}

void translate(char (&str)[1000]){
    for (int j = 0; j < 1000; j++){
        if (str[j] != '.'){
            int now = str[j] - 'a';
            switch (now){
                case 0:
                    str[j] = '0'; break;
                case 1:
                    str[j] = '1'; break;
                case 2:
                    str[j] = '2'; break;
                case 3:
                    str[j] = '3'; break;
                case 4:
                    str[j] = '4'; break;
                case 5:
                    str[j] = '5'; break;
                case 6:
                    str[j] = '6'; break;
                case 7:
                    str[j] = '7'; break;
                case 8:
                    str[j] = '8'; break;
                case 9:
                    str[j] = '9'; break;
            }
        }
    }
}
//WTF is this...
