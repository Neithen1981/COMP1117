#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "Input the string:" << endl;
    string str;
    cin >> str;
    int first = str.find("/");
    int second = str.find("/", first + 1);
    cout << "The month is: " << str.substr(first + 1, second - first -1) << endl;
    return 0;
}
