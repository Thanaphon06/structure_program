#include <iostream>
using namespace std;
int main(){
    int flow_balance , dept , total;
    cin >> flow_balance;
    cin >> dept;

    total = flow_balance / dept;

    if (total >= 1)
    {
        cout << "มีเงินเก็บ เพียงพอในการชำระหนี้ระยะสั้น";
    }else if (total < 1)
    {
        cout << "มีความเสี่ยงในการใช้ชีวิต หรือ การเป็นหนี้เสีย";
    }else{
        cout << "Something went wrong!";
    }
    
    
}