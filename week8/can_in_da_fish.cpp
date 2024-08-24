#include <iostream>
using namespace std;
int main(){

    int kapok,pra,toma;
    int use_pra , use_toma;

    cout << "how many pra use for one can : ";
    cin >> use_pra;
    cout << "how many tomato use for one can : ";
    cin >> use_toma;

    cout << "how many pra do u have : ";
    cin >> pra;
    cout << "how many tomato do u have : ";
    cin >> toma;

    while(pra >= use_pra && toma >= use_toma){
        toma -= use_toma;
        pra -= use_pra;
        kapok++;
    }
    cout << "pra " << pra << endl;
    cout << "toma " << toma << endl;
    cout << "U will got "<<kapok << " can";
}