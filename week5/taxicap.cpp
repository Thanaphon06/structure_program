#include <iostream>
using namespace std;

int main(){
     
    int distance,time_hour,total_time,total_distance ;
    cout << "Enter Distance And time(Hour)" ;
    cin >> distance , time_hour;

    total_time = time_hour * 2;
    
    if (distance >=0 || distance <= 1)
    {
        total_distance = 35;
    }else if (distance >=2 || distance <= 15)
    {
        total_distance = 35;
    }
    
    
    

    /*
    0-1 35
    2-12 5
    12-20 5.50
    20-40 6
    40-60 6.50
    60-80 7.50 
    80 up 8.50
     */
    
    
}