#include <iostream>
using namespace std;

int main()
{
    int size = 100;
    char str[size] = {};
    cout << "Enter your string: ";
    cin.getline(str, size);
    int word = 0;
    for (int i = 0;  str[i]; i++){
        if((str[i] >= 'A' && str[i] <= 'Z')  || (str[i] >= 'a' && str[i] <= 'z'))
        {
             if(!(str[i+1]>='a' && str[i+1]<='z') || (str[i+1]>='A' && str[i+1]<='Z')){
                word++;
                }
        }
    }
    cout << word;
    return 0;
}
