#include <iostream>

using namespace std;

void mystring(char str[50]){
    int word = 0;
    for (int i = 0;  str[i]; i++){
        if((str[i] >= 'A' && str[i] <= 'Z')  || (str[i] >= 'a' && str[i] <= 'z')){
            if(!(str[i+1]>='a' && str[i+1]<='z') || (str[i+1]>='A' && str[i+1]<='Z')){
                            word++;
            }
        }
    }
    cout << word;
}

int main()
{
    char str[50];
    cout << "Enter your string: ";
    cin.getline(str,50);
    mystring(str);
    return 0;
}
