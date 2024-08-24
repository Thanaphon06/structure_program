#include <iostream>
using namespace std;
int main()
{
int s,x1,x2;
cout << "Enter your x1 : ";
cin >> x1;
cout << "Enter your s : ";
cin >> s;
if ( s > -1000 && x1 > -1000 && s < 1000 && x1 < 1000)
 {

    x2 = (s * 2) - x1 ;
    cout << x2;
    //cout << "average of this item is " << / << endl;
 }else{
    cout << "Please enter number between -1000 to 1000 ";
 }
}