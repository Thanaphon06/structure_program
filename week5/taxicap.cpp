#include <iostream>
using namespace std;

int main() {
    int distance, time_hour, total_time, total_distance,total;
    string detail_total;
    cout << "Enter Distance And time (Hour): ";
    cin >> distance >> time_hour;

    total_time = time_hour * 2;

    if (distance >= 0 && distance <= 1) {
        total_distance = 35;
    } else if (distance >= 2 && distance <= 12) {
        total_distance = 35 + ((distance - 1) * 5);
        detail_total = "35 + ((your distance - 1) * 5)";

    } else if (distance >= 13 && distance <= 20) {
        total_distance = 35 + (11 * 5) + ((distance - 12) * 5.50);
        detail_total = "35 + (11 * 5) + ((your distance - 12) * 5.50)";

    } else if (distance >= 21 && distance <= 40) {
        total_distance = 35 + (11 * 5) + (8 * 5.50) + ((distance - 20) * 6);
        detail_total = "35 + (11 * 5) + (8 * 5.50) + ((your distance - 20) * 6)";

    } else if (distance >= 41 && distance <= 60) {
        total_distance = 35 + (11 * 5) + (8 * 5.50) + (20 * 6) + ((distance - 40) * 6.50);
        detail_total = "35 + (11 * 5) + (8 * 5.50) + (20 * 6) + ((your distance - 40) * 6.50)";

    } else if (distance >= 61 && distance <= 80) {
        total_distance = 35 + (11 * 5) + (8 * 5.50) + (20 * 6) + (20 * 6.50) + ((distance - 60) * 7.50);
        detail_total = "35 + (11 * 5) + (8 * 5.50) + (20 * 6) + (20 * 6.50) + ((your distance - 60) * 7.50)";

    } else if (distance > 80) {
        total_distance = 35 + (11 * 5) + (8 * 5.50) + (20 * 6) + (20 * 6.50) + (20 * 7.50) + ((distance - 80) * 8.50);
        detail_total = "35 + (11 * 5) + (8 * 5.50) + (20 * 6) + (20 * 6.50) + (20 * 7.50) + ((your distance - 80) * 8.50)";
    }else{
        cout << "Something went wrong please try again";
    }

    total = total_time + total_distance;

    cout << "time = " << time_hour << " Hour"<< endl;
    cout << detail_total << endl;
    cout << "Total = " << total << " Bath" << endl;

}
