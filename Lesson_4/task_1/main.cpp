#include <iostream>

using namespace std;

int main()
{
    int size = 50;
    char str1[size];
    char str2[size];
    cout << "Enter your first string:";
    cin.getline(str1, size);
    cout << "Enter your second string:";
    cin.getline(str2, size);
    int count1 = 0;
    while(str1[count1] != '\0'){
        count1++;
    }
    int count2 = 0;
    while(str2[count2] != '\0'){
        count2++;
    }
    if(count1 > count2)
        cout << "The first string is bigger";
    else if(count1 < count2)
        cout << "The second string is bigger";
return 0;
}
