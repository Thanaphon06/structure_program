// Program 2_6 : Illustrate different forms of floating-point constants that have the same value
#include <iostream>
using namespace std;

int main()
{
    cout << 230.E+3 << endl;     // Scientific notation with decimal point
    cout << 230E3 << endl;       // Scientific notation without decimal point
    cout << 230000.0 << endl;    // Standard decimal notation
    cout << 2.3e5 << endl;       // Scientific notation with decimal point
    cout << 0.23E6 << endl;      // Scientific notation with leading zero
    cout << .23e+6 << endl;      // Scientific notation without leading zero before decimal point
    return 0;
}
