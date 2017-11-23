#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    struct Num
    {
        int value; int count;
    };

    Num num[10] = {0,0};
    for (int i = 0; i < 10; i ++){
        int temp;
        cin >> temp;
        for (int j = 0; j < 10; j++){
            if (num[j].count != 0){
                if (num[j].value == temp){
                    num[j].count ++;
                    break;
                }
            }
            else{
                num[j].value = temp;
                num[j].count ++;
                break;
            }
        }
    }

    cout << "Number\tCount" << endl;
    for (int i = 0; i < 10; i ++){
        if (num[i].count != 0)
            cout << num[i].value << "\t" << num[i].count << endl;
    }

    return 0;
}
