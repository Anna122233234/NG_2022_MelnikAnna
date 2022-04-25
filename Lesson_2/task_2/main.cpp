#include <iostream>

using namespace std;

int main()
{
    int number, b = 0, sum;
        cout << "Enter the number: ";
        cin >> number;
        for (int i = number; i > 0; i /=10){
            if(i % 2 == 0) {
                cout << i << "; " << endl;
                sum +=i %10;
            }
        }
        cout <<"\nSum = " << sum;
    return 0;
}
