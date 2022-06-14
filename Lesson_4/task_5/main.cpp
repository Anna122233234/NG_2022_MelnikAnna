#include <iostream>
using namespace std;

int main()
{
    int size = 100;
    char str[size];
    cout << "Enter your string: ";
    cin.getline(str, size);
    int word = 0;
    int word1 =0;
    for (int i = 0;  str[i]; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            word++;
        }
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            word1++;
        }
    }
    cout << "Upper case: " << word << endl;
    cout << "Lower case: " << word1 << endl;
    if(word > word1)
        cout << "Upper case is bigger than Lower";
    else
        cout << "Lower case is bigger than Upper";
    return 0;
}
