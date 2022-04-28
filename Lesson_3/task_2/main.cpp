#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    int array[4];
    cout << "It's the first array: ";
    for (int i = 0; i < 4; i++)
        array [i] = 1 + rand () % 9;
    for (int i = 0; i < 4; i++)
        cout << array[i] << " ";
    cout << endl;
    cout << "It's the second array: ";
    int array1[4];
    for (int i = 0; i < 4; i++)
        array1 [i] = 1 + rand () % 9;
    for (int i = 0; i < 4; i++)
        cout << array1[i] << " ";
    int sum = 0;
    int sum1 = 0;
    sum = array[0]*1000 + array[1]*100 + array[2]*10 + array[3];
    sum1 = array1[0]*1000 + array1[1]*100 + array1[2]*10 + array1[3];
    cout << endl;
    if (sum > sum1){
        cout << sum << " > " << sum1;
    }
    else if (sum < sum1){
        cout << sum << " < " << sum1;
    }
    else if (sum == sum1){
        cout << sum << " = " << sum1;
    }
    return 0;
}
