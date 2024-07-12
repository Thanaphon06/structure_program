#include <iostream>
using namespace std;

int main(){
    
    int price , tax , tax_total , total;

    cout << "Enter Price : ";
    cin >> price;

    cout << "Enter Vat (%) : ";
    cin >> tax;

    tax_total = price * (tax/100);

    total = price + tax_total;

    cout << "Net price of product = " << total ;

}