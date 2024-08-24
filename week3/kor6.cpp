#include <iostream>
using namespace std;
int main() {
    
    float car_start , car_end , time_hour,time_minute,time_sec ,distance,time_used,kph;
    
    cout << "car start : ";
    cin >> car_start;

    cout << "car end : ";
    cin >> car_end;
    
    cout << "enter time (hour minute second) : ";
    cin >> time_hour >> time_minute >> time_sec ;


    distance = car_end - car_start;
    time_used = time_hour + (time_minute / 60.0) + (time_sec / 3600.0);
    
    kph = distance / time_used;
    
    cout << "Car traveled " << distance << " kilometers in "
         << time_hour << " hrs " << time_minute << " min " << time_sec << " sec." << endl;
    cout << "Average velocity was " << kph << " kph." << endl;
}
