#include <iostream>
using namespace std;

// Function template to check if a number is prime
template <typename T>
bool isPrime(T n) {
    if (n <= 1) {
        return false;
    }
    
    for (T i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Call the template function
    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
