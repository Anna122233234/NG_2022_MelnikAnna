#include <iostream>

using namespace std;

int main()
{
    int number = 0;
       cout << "Enter the  number: ";
       cin >> number;
       int sum = 0;
       int last_number = number % 10;
       for (int i = number; i > 0; i /= 10)
       {
           if ((i % 10 == i / 10 % 10) || (i == last_number))
               sum += i % 10;
       }
       cout << "sum is:  " << sum;
       return 0;
}
