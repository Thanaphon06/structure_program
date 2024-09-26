#include <iostream>
using namespace std;

int main(){
    
    int balance = 100, year = 4,sum ;
    float tax = 0.05;

    for (int i = 1; i <= year; i++)
    {
        balance += (balance * tax);
        cout << "Year: " << i << " = ";
        cout << balance << endl;
    }
    
}