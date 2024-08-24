#include <iostream>
using namespace std;
int main(){
    
    int host_num,player;

    cout << "Host please enter number :";
    cin >> host_num;
    cout << endl ;cout << endl ;cout << endl ;cout << endl ;cout << endl ;cout << endl ;cout << endl ;

    cout << "player guess a number :";
    cin >> player;

    while (player != host_num)
    {
        cout << "please try again:";
        cin >> player;
    }
    if (player == host_num)
    {
        cout << "correct!!";
        
    }else{
        cout << "something went wrong.";
    }
    
        

}