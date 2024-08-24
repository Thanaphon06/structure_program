#include <iostream>
using namespace std;
int main(){
    //6706021410249 ธนพล สิทธิมาศ
    int number;
    
    cout << "Give me a number: ";
    cin >> number;

    if (number > 0)
    {
        cout << "Number is positive";
    }else if (number < 0)
    {
        cout << "Number is negative";
    }else if(number == 0){
        cout << "Number is zero";
    }
    else{
        cout << "Error";
    }
    
}