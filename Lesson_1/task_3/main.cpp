#include <iostream>

using namespace std;

int main()
{
    int age;
    bool answer(true);
    cout << "Enter your age: ";
    cin >> age;
    if (age > 10){
        cout <<"Do you study? "<< endl;
        cout <<"(Enter 1 - yes, 0 - no)" << endl;
        cin >> answer;
        if (answer){
            cout << "You are awesome!";
        }
        else {
            cout << "Why?" << endl;
        }
    }
    else {
        cout << "You are so big!";
    }
    return 0;
}
