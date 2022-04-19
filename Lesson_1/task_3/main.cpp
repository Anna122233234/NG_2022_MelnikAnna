#include <iostream>

using namespace std;

int main()
{
    int age;
    bool answer(true);
    cout << "Enter your age:";
    cin >> age;
    if (age > 10){
        cout << "Do you study?(1/0): " << endl;
        cin >> answer;
        if (answer){
            cout <<"You are awesome!" << endl;
        }
        else {
            cout << "Why?" << endl;
        }
    }
    else {
        cout << "You are realy big!";
    }
    return 0;
}
