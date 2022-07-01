#include <iostream>

using namespace std;

void starsRow(int n, int i, int j = 0){
    if(j < n)
    {
        if((i >= 1 && i <= n-2)&&(j >= 1 && j <= n-2))
            cout<<" ";
        else
            cout<<"*";
        starsRow(n, i, j+1);
    }
    else{
        cout << endl;
    }
}

void stars(int n, int i = 0){
    if(i<n){
        starsRow(n, i);
        stars(n,i+1);
    }
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    stars(n);
    return 0;
}
