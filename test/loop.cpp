#include <iostream>
using namespace std;
int main(){

    srand(time(0));
    int daypass = 300 ,
    time_work = 10,
    total,
    used_total,
    sum;

    total = daypass * time_work;

    for ( int i = 1; i <= time_work; i++)
    {
        int used_day = rand() % 101 ;
        used_total += used_day;
        cout << "Day "<< i <<" "<< used_day <<" Bath"<< endl;
        
    }
    
    cout << "money you used :"<<used_total <<" Bath"<< endl;  
    sum = total - used_total;
    cout << "Your total : "<<sum<<" Bath" << endl;
}