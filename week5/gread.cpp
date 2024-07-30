#include <iostream>
using namespace std;
int main(){
    int score;
    char grade;
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
        cout << "error";
    }
    }else{
        cout << "Please Enter score between 0 - 100";
    }
    
    
        cout << "Grade : " << grade;
    
}