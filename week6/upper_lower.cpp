#include <iostream>
using namespace std;
int main() {
    string input;
    int Upper = 0;
    int Lower = 0;
    int Spaces = 0;
    int Special = 0;
    
    cout << "Enter message: ";
    getline(cin, input);

    for (char c : input) {
        // Check for uppercase letters
        if (c >= 'A' && c <= 'Z') {
            Upper++;
        }
        // Check for lowercase letters
        else if (c >= 'a' && c <= 'z') {
            Lower++;
        }
        // Check for spaces
        else if (c == ' ') {
            Spaces++;
        }
        // Everything else is considered special characters
        else {
            Special++;
        }
    }

        cout << "Your message has " << Upper << " Upper case characters\n";
        cout << "Your message has " << Lower << " Lower case characters\n";
        cout << "Your message has " << Spaces << " Space characters\n";
        cout << "Your message has " << Special << " Special characters\n";
    
}