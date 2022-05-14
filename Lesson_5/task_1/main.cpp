#include <iostream>

using namespace std;

char stars(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((i >= 1 && i <= n-2)&&(j >= 1 && j <= n-2))
                cout<<" ";
            else
                    cout<<"*";
        }
        cout << endl;
    }
}
int main()
{
    int a;
    cout << "Enter the number : ";
    cin >> a;
    stars(a);
    return 0;
}
