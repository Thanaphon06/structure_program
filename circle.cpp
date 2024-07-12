#include <iostream>
using namespace std;

int main(){
    
    float pi , cr , area , circum;
    pi = 3.1415;

    cout << "Circle radius : ";
    cin >> cr;

    area = pi * cr * cr;

    circum = 2 * cr * pi;

    cout << area << circum;
    cout << "Area of circle with radius " << cr << " is " << area;
    cout << "\n Circumfernce is " << circum;

}