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
    sum = array[0]*1000 + array[1]*100 + array[2]*10 + array[3];
    sum1 = array1[0]*1000 + array1[1]*100 + array1[2]*10 + array1[3];
    if (sum > sum1)
        cout << endl << sum << " > " << sum1;
    else if (sum < sum1)
        cout << endl << sum << " < " << sum1;
    else if (sum == sum1)
        cout << endl << sum << " = " << sum1;
    return 0;
}
