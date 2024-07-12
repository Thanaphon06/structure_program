#include <iostream>
using namespace std;

int main(){
    
    int price , tax_total , total ,tax;
    
    cout << "Enter Price : ";
    cin >> price;

    cout << "Enter Vat (%) : ";
    cin >> tax;

    tax_total = (price * tax) / 100;

    total = price + tax_total;
    cout << tax_total << endl;

    cout << "Net price of product = " << total ;
    
}