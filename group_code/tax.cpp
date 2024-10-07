#include <iostream>
using namespace std;
int main(){
    
    float income_per_m , payment , balance , ip_year , balacne_tax , tax  ;
    float parent = 3 , d_parent;
    cout << "input income per mouth : ";
    cin >> income_per_m;

    ip_year = income_per_m * 12;
    do
    {
        cout << "Payment per mouth (can't over 100k) : ";
        cin >> payment;
    } while (payment > 100000);

    balance = ip_year - payment ;
    
    while (parent > 2 || parent < 0)
    {
        cout << "How many parent you adopt (0-2) : ";
        cin >> parent;
    }
    
    d_parent = 30000 * parent;

    balacne_tax = (balance - 60000) - d_parent;
    
    if (balacne_tax < 150000)
    {
        cout << "Your so broke";
    }
    else if (balacne_tax > 5000000)
    {
        tax = ((balacne_tax - 5000000) * 0.35) + 1265000;
    }
    else if (balacne_tax > 2000000)
    {
        tax =((balacne_tax - 2000000) *0.30) + 365000;
    }
    else if (balacne_tax > 1000000)
    {
        tax = ((balacne_tax - 1000000) * 0.25) + 115000;
    }
    else if (balacne_tax > 750000){
        tax = ((balacne_tax - 750000) * 0.20) + 65000;
    }
    else if (balacne_tax > 500000){
        tax = ((balacne_tax - 500000) * 0.15) + 27500;
    }
    else if (balacne_tax > 300000){
        tax = ((balacne_tax - 300000) * 0.10) + 7500;
    }
    else if (balacne_tax > 150000){
        tax = ((balacne_tax - 150000) * 0.05);
    }

cout << balance << endl;
cout << balacne_tax << endl;
cout << tax << endl;

//แสดง รายได้สุทธิ, รายได้นำไปคิดภาษี, ภาษี
    
    


}