#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, D;
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
    if (D =0){
        cout <<"x = " << (-b - D)/ (2*a) << endl;
    }
    else {
        cout <<"There are no roots" << endl;
    }
    return 0;
}
