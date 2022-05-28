#include <iostream>
#include <math.h>

using namespace std;

void initializer(){
    float a, b, c, D;
    cout << "Enter a: " << a << endl
         << "Enter b: " << b << endl
         << "Enter c: " << c << endl;
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
    initializer();
    return 0;
}
