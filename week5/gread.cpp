#include <iostream>
using namespace std;
int main(){
    int score,a,
    homework, assignment , mid ,final, class_room;
    
    char grade;

    cout << "How many time do you want to use?  ";
    cin >> a;
    

for (int i = 0; i < a; i++ ){

    
    cout << "Please Enter your score homework(15) : ";
    cin >> homework;
    cout << "Please Enter your score assignment(15) : ";
    cin >> assignment;
    cout << "Please Enter your score class room(10) : ";
    cin >> class_room;
    cout << "Please Enter your score mid term(30) : ";
    cin >> mid;
    cout << "Please Enter your score final term(30) : ";
    cin >> final;

    score = homework + assignment + class_room + mid + final;

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
        cout << "\nError\n";
    }
    }else{
        cout << "\nPlease Enter score between 0 - 100\n";
    }
    cout << "Your score = " << score << endl;
    cout << "Grade : " << grade << endl;
    }
    
    
}
