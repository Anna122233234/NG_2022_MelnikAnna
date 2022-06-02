#include <iostream>

using namespace std;

int main()
{
    int array[20];
    int count = 0;
    int m = 0;
    for (int i= 0; i < 20; i++)
    {
        cout << "[" << i + 1 << "]" << ": ";
        cin >> array [i];
        if (array [i] == 0)
        {
            count = i;
            break;
        }
        if (m < array [i])
        {
            m = array [i];
        }
    }
    for(int i =0; i< m; i++)
    {
        for (int j =0; j < count; j++)
        {
            if (array [j] > 0 )
            {
                cout << "*";
                array[j] -= 1;
            }
            else{
                cout << " ";
                array[j] -= 1;
            }
        }
        cout << endl;
    }
}

