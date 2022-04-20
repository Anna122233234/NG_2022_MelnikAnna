#include <iostream>

using namespace std;

int main()
{
    int number, b = 0, sum;
    cout << "Enter the number: ";
    cin >> number;
    while(number > 0){
        b = number % 10;
        if(b % 2 == 0) {
            cout << b << "; ";
            sum += b;
        }
        number /= 10;
    }
    cout <<"\nSum = " << sum;
    return 0;
}
