#include <iostream>
using namespace std;

int main() {
    int n,i;
    bool isPrime = true; 

    cout << "Enter a number: ";
    cin >> n;
    
    if (n <= 1) {
        isPrime = false; 
    } else {
        
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = false; 
                break;
            }
        }
    }
    if (isPrime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
}