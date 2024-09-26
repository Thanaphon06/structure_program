#include <iostream>
using namespace std;
int main(){
    
    /**char te[10];
    cout << "yee";
    cin >> te;    

    for (int i = 0; i < 5; i++)
    {
        cout << te[i];
    }
    **/
    srand(time(0));
    char a[10];
    

    for (size_t i = 0; i < 10; i++)
    {
        
        a[i] = rand() % 5  ;
        cout << a[i];
    
    }

    
    
    
}