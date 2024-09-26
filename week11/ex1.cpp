#include <iostream>
using namespace std;

int main(){
    int A[5] = {16, 12, 6, 8, 14};
    for (int i = 0; i < 5; i++)
        cout << i       << "\t" << &A[i]     << "\t" << A[i]     << endl;
    return 0;
}