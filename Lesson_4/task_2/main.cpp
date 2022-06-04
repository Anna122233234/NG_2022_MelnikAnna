#include <iostream>

using namespace std;

int main()
{
    int size = 50;
    char str[size];
    cout << "Enter string: ";
    cin.getline(str,size);

    for(int i = 0; i < size; i++)
    {
        if ((str[i] == 'a' && i % 2 == 0) || (str[i] == 'e' && i % 2 == 0) ||
            (str[i] == 'i' && i % 2 == 0) || (str[i] == 'o' && i % 2 == 0) ||
            (str[i] == 'u' && i % 2 == 0) || (str[i] == 'y' && i % 2 == 0))
        {
                cout << str[i] << " ";
        }
    }
    return 0;
}
