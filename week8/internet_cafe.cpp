#include <iostream>
using namespace std;
int main(){

    int perHour = 20 , member = 100, t_use , price_total ,price ;
    float discout = 0.5;
    char member_c;

    cout << "How many hour do you use this time? ";
    cin >> t_use;

    
    cout << "Membership or not [Y/n]";
    cin >> member_c;
    if (member_c == 'Y')
    {
        price = t_use * perHour;
        price_total = ((price * discout) + price) + member;
    }else{
        price_total = t_use * perHour;
    }
    


    
    

}