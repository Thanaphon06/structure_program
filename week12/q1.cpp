#include <iostream>
using namespace std;

void random_string(char t[] , int lot){
    
    for (int i = 0; i < lot; i++)
    {
        t[i] = rand() % 5 + 'a' ;
    }
}

void print_massgae(char t[],int lot){

        for (int i = 0; i < lot; i++)
    {
        cout << t[i];
    }
}

int output(char t[] ,int lot)
{
    int t_lot;
    t_lot = lot - 1;

        for(int i = 0 ; i < lot ; i++){
        if (t[i] == t[t_lot])
        {
            cout << t[i] << " = " << t[t_lot] << endl;
        }
        else if (t[i] != t[t_lot])
        
        {
            cout << t[i] << " = " << t[t_lot] << endl;
            return false;
            break;
        }
        
        t_lot-=1;
    }
}

void checking(bool isPalin){
    if (isPalin == false)
    {
        cout << "\nIs not Parindrome!";
    }
    else if (isPalin == true)
    {
        cout << "\nIs Parindrome!";
    }
    
}

int main(){
    srand(time(0));

    int lot;
    bool isPalin = true;

    cout << "Enter lange of string : ";
    cin >> lot;
    
    char t[lot];

    random_string(t , lot);

    print_massgae(t,lot);

    cout << endl;

    isPalin = output(t,lot);
    
    checking(isPalin);
      
}