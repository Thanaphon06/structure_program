#include <iostream>
using namespace std;
int main(){


    string test;
    string a = "AABA";
    cout << "Enter ur anwser: ";
    cin >> test;
for(int i=1;i<=a.length();i++){
    for (char testty : test) {
       
        if(testty=a.at(i-1)){
            cout << "took dong" << endl;
        }else{
            cout << "yeeeeee" << endl;
            return 0;
        }
       }
       
    }
    return 0;
    
}