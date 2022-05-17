#include <iostream>
#include <math.h>

using namespace std;

float initializer(float a, float b, float c, float D){
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Enter c: ";
        cin >> c;
        D = b * b - (4* a * c);
        cout <<"D = "<< D << endl;
        if (D > 0){
            D = sqrt(D);
            cout << "x1 = " << (-b - D)/ (2*a) << endl;
            cout << "x2 = " << (-b + D)/ (2*a) << endl;
        }
        if (D == 0){
            cout <<"x = " << (-b - D)/ (2*a) << endl;
        }
        if (D < 0) {
            cout <<"There are no roots " << endl;
        }
        return 0;
}
int main()
{
    float a, b , c, D;
    initializer( a,  b,  c, D);
    return 0;
}
