#include <iostream>

using namespace std;

int farray(int array[], int i){
    if(i < 5){
        cout << array[i] << " ";
        return farray(array, i+1);
    }
}
int findnumber(int array[], int key, int i){
    if (i < 5){
        if (array[i] == key){
            cout << "This number is in the array: ";
        }
        return findnumber(array, key, i+1);
    }

}

int main()
{
    int array[5]= {5, 8, 3, 9, 1};
    int key;
    cout << "It`s your array: " << endl;
    farray(array,0);
    cout << endl << "Enter the number: ";
    cin  >> key;
    findnumber(array, key, 0);
    return 0;
}
