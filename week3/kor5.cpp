#include <iostream>
using namespace std;

int main() {
    int number,digit1,digit2,digit3,digit4,binary ;
    cout << "Enter a 4-digit number: ";
    cin >> number;

 
    digit1 = number / 1000;
    digit2 = (number / 100) % 10;
    digit3 = (number / 10) % 10;
    digit4 = number % 10;

 
    cout << digit1 << "   " 
         << digit2 << "   " 
         << digit3 << "   " 
         << digit4 << endl;

    binary  = (digit1 * 8) + (digit2 * 4) + (digit3 * 2) + (digit4 * 1);

    // Print the decimal value
    cout << "Decimal value of " << digit1 << digit2 << digit3 << digit4 << " = " << binary  << endl;

}
