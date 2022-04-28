#include <iostream>

using namespace std;

int main()
{
    int k, key;
    cout << "Enter the size of array: ";
    cin >> k;
    int array[k];
    for (int i = 0; i < k; i++) {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> array [i];
    }
    cout << "This is your array: ";
    for (int i = 0; i < k; i++) {
        cout << array [i] << " ";
    }
    cout << "\nWhat number you want to check: ";
    cin >> key;
    for (int i = 0; i < k; i++) {
        if ( array [i] == key){
            cout << "i know that number!" << endl;
            break;
        }

    }
    return 0;
}
