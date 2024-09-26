#include <iostream>
using namespace std;

// Overloaded function declarations
void a(float balance, float add, float year); // Original version
void a(float balance, float add, float year, float bonusRate); // Overloaded version

int main() {
    int balance , year;


    cout << "how much your balance : ";
    cin >> balance;

    cout << "how many year : ";
    cin >> year;
    
    float add = 0.05, bonusRate = 0.02;

    a(balance, add, year); // Calls the original version
    a(balance, add, year, bonusRate); // Calls the overloaded version
}

// Original function
void a(float balance, float add, float year) {
    for (int i = 1; i <= year; i++) {
        balance += (balance * add);
        cout << "Year: " << i << " = ";
        cout << balance << endl;
    }
}

// Overloaded function with a bonus rate
void a(float balance, float add, float year, float bonusRate) {
    for (int i = 1; i <= year; i++) {
        balance += (balance * (add + bonusRate));
        cout << "Year (with bonus): " << i << " = ";
        cout << balance << endl;
    }
}
