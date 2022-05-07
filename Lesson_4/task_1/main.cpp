#include <iostream>

using namespace std;

int main()
{
    string str1;
    string str2;
    cout << "Enter your first string:";
    getline(cin, str1);
    cout << "Enter your second string:";
    getline(cin, str2);
    if(str1.length() > str2.length())
        cout << "The first string is bigger";
    else if (str1.length() < str2.length())
        cout << "The second string is bigger";
    return 0;
}
