#include <iostream>

using namespace std;

int main()
{
    int motherboard, videocard, CPU;
    float discount;
    cout << "Enter motherboard price:" << endl;
    cin >> motherboard;
    cout << "Enter videocard price: " << endl;
    cin >> videocard ;
    cout << "Enter CPU price: " << endl;
    cin >> CPU;
    cout << "Enter discount: " << endl;
    cin >> discount  ;
    cout << "Your PC will cost " << (motherboard + videocard + CPU) - ((motherboard + videocard + CPU)*discount /100) ;
    return 0;
}
