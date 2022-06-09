#include <iostream>
#include <math.h>

using namespace std;

void initializer(float a, float b, float c){
    float D;
    D = b * b - (4* a * c);
    cout <<"D = "<< D << endl;
    if(D > 0){
        D = sqrt(D);
        cout << "x1 = " << (-b - D)/ (2*a) << endl <<"x2 = " << (-b + D)/ (2*a) << endl;
    }
    if(D == 0){cout <<"x = " << (-b - D)/ (2*a) << endl;}
    if (D < 0){cout <<"There are no roots " << endl;}
}
int main()
{
    float a, b, c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    initializer(a, b, c);
    return 0;
}
