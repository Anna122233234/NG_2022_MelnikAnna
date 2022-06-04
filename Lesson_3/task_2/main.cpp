#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int array[4];
    int sum, sum1 = 0;;
    cout << "It's the first array: ";
    for (int i = 0; i < 4; i++){
        array [i] = 1 + rand () % 9;
        cout << array[i];
    }
    cout << endl << "It's the second array: ";
    int array1[4];
    for (int i = 0; i < 4; i++){
        array1 [i] = 1 + rand () % 9;
        cout << array1[i];
    }
    int res, res1 = 0, i, pow;
    for (i = 3, pow = 1; i>=0; --i, pow*=10) {
        sum += array[i] * pow;
        sum1 += array1[i]*pow;
    }
    if (sum > sum1)
        cout << endl << sum << " > " << sum1;
    else if (sum < sum1)
        cout << endl << sum << " < " << sum1;
    else if (sum == sum1)
        cout << endl << sum << " = " << sum1;
    return 0;
}
