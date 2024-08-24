#include <iostream>
using namespace std;
int main(){
    //6706021410249 ธนพล สิทธิมาศ
    char coin1 , coin2;
    cout << "Enter Coin1 (Head(H/h) / Tail(T/t)): ";
    cin >> coin1;
    cout << "Enter Coin2 (Head(H/h) / Tail(T/t)): ";
    cin >> coin2;

    switch (coin1)
    {
    case 'H':
    case 'h':
        if (coin2 == 'H' || coin2 == 'h')
            {
                cout << "Head";
                return 0;
            }
        else if (coin2 == 'T' || coin2 == 't')
        {
            cout << "Center";
            return 0;
        }
        break;

    case 't':
    case 'T':
     if (coin2 == 'H' || coin2 == 'h'){
            cout << "Center";
            return 0;
        }
        if (coin2 == 'T' || coin2 == 't')
        {
            cout << "Tail";
            return 0;
        }
        break;
    default:
        cout << "Something went wrong please try again";
        break;
    }
    
}