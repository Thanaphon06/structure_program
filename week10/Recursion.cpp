#include <iostream>
using namespace std;

// Recursive function to check if a number is prime
bool isPrimeRec(int n, int i = 2) {
    // Base cases
    if (n <= 2) {
        return (n == 2) ? true : false; // 2 is prime, numbers <= 1 are not
    }
    if (n % i == 0) {
        return false; // If divisible, it's not prime
    }
    if (i * i > n) {
        return true; // No divisor found, it's prime
    }

    // Recursive case: Check next divisor
    return isPrimeRec(n, i + 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Call the recursive function
    if (isPrimeRec(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
