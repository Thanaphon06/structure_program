#include <iostream>
using namespace std;
int main(){
    
    char size , materail;
    int total , price , mete_price;
    
    while (size != 'S' && size !='M' && size != 'L' && size != 's' && size !='m' && size != 'l')
    {
        cout << "choose house size ['S'(small)/'M'(midiam)/'L'(large)] : ";
        cin >> size;
    }
    
    
    while (materail != 'A' && materail !='B' && materail != 'C'&& materail != 'a' && materail !='b' && materail != 'c')
    {
        cout << "choose your meterail [ A +50% / B +30% / C +15% ] : ";
        cin >> materail;
    }
    
    if (size == 's' || size == 'S')
    {
        price = 100;
        if (materail == 'a' || materail == 'A')
        {
            total = (price * 0.5) + price;
            cout << total;
        }    
    }
    
}