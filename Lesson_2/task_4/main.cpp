#include <iostream>

using namespace std;

int main()
{
   int num;
   cout << "Enter the number: ";
   cin >> num;
   for (int i=0; i < num;i++){
       for(int k = num; k > i; k--){
           cout << " ";
       }
       for (int j =0; j <= 2*i; j++){
           cout << "*";
       }
       cout << endl;
   }
   for(int j =0; j < num; j++)
    {
        cout << " ";
    }
    cout << "*";
}
