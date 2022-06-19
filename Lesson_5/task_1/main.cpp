#include <iostream>

using namespace std;

char stars(int n, int i, int j){
    if (i < n){
        if(j < n){
            if((i >= 1 && i <= n-2)&&(j >= 1 && j <= n-2))
                cout<<" ";
            else
                    cout<<"*";
        return stars(n, i, j+1);
        }
        cout << endl;
    return stars(n, i+1, j);
    }
    return n;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    stars(n, 0, 0);
    return 0;
}
