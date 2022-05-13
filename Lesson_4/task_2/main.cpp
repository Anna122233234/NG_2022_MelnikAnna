#include <iostream>

using namespace std;

int main()
{
    int size = 50;
    char str[size];
    cout <<"Enter your string: "<< endl;
    cin.getline(str, size);
    for (int i = 0; i < size; i++){
        if ((i % 2 == 0 && str[i] == 'a') || (i % 2 == 0 && str[i] == 'i')||
            (i % 2 == 0 && str[i] == 'y') || (i % 2 == 0 && str[i] == 'e')||
            (i % 2 == 0 && str[i] == 'u') || (i % 2 == 0 && str[i] == 'o')){
            cout << str [i];
        }
    }
    return 0;
}
