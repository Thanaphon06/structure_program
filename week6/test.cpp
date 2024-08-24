#include <iostream>
using namespace std;
int main() {
    int position = 0;
    cout << "What do you see cups move (Ex. AABCC): ";
    string moves;
    cin >> moves;
 
    for (char move : moves) {
        switch (move) {
            case 'A':
                if (position == 0) {
                    position = 1;
                } else if (position == 1) {
                    position = 0;
                }
                break;
            case 'B':
                if (position == 1) {
                    position = 2;
                } else if (position == 2) {
                    position = 1;
                }
                break;
            case 'C':
                if (position == 0) {
                    position = 2;
                } else if (position == 2) {
                    position = 0;
                }
                break;
            default:
                cout << "Somehing went wrong: " << move << endl;
                
        }
    }
}