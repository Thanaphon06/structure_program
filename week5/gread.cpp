#include <iostream>
using namespace std;
int main(){
    int score,a;
    char grade;

    cout << "How many time do you want to use?  ";
    cin >> a;
    

for (int i = 0; i < a; i++ ){

    cout << "Please Enter your score : ";
    cin >> score;
    
    if (score >= 0 && score <= 100)
    {
    if (score <= 59)
    { 
        grade = 'F';
    }else if (score <= 69)
    {  
        grade = 'D';
    }else if (score <= 79)
    {
        grade = 'C';
    }else if (score <= 89)
    {
        grade = 'B';
    }else if (score >= 90)
    {
        grade = 'A';
    }else{
        cout << "\nerror\n";
    }
    }else{
        cout << "\nPlease Enter score between 0 - 100\n";
    }
    cout << "Grade : " << grade << endl;
    }
    
    
    
        
    
}
