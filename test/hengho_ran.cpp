#include <iostream>

using namespace std;

int main(){
    srand(time(0));
    int point = 0;
    string st_a;
    bool valid_input = false;

    while (!valid_input) {
        cout << "Enter your answer [\"AABCD\"]: ";
        cin >> st_a;

        if (st_a.length() != 5) {
            cout << "Error: Input must be exactly 5 characters long. Please try again." << endl;
            continue;
        }

        for (char check : st_a) {
            if (check != 'A' && check != 'a' && 
                check != 'B' && check != 'b' && 
                check != 'C' && check != 'c' && 
                check != 'D' && check != 'd') {
                cout << "Error: Input can only contain 'A', 'B', 'C', or 'D'. Please try again." << endl;
                valid_input = false;
                break; 
        }
    }

    // After input is valid, proceed with the rest of the program
    for (char answer_a : st_a) {
        char a = 'A' + rand() % 4;
        cout << a;
        if (answer_a == a || answer_a == tolower(a)) {
            point++;
        }        
    }
    cout << endl << "Points: " << point << endl;

}
}