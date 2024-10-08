#include <iostream>
#include <cstdlib>
#include <cstring>
#include <iomanip>
using namespace std;

char getGrade(int score) {
    if (score >= 80 && score <= 100) return 'A';
    else if (score >= 70 && score <= 79) return 'B';
    else if (score >= 60 && score <= 69) return 'C';
    else if (score >= 50 && score <= 59) return 'D';
    else return 'F';
}

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int n = rand() % 16 + 5;  

    cout << "   Number of Students: " << n << endl;

     
    int* scores = new int[n];     

    for (int i = 0; i < n; i++) {
        scores[i] = rand() % 101;
        
    }

    cout << left << setw(10) << "Student" <<  setw(10) << "Score" << "Grade" << endl;
    cout << "------------------------------------------------" << endl;

    int countA = 0, countB = 0, countC = 0, countD = 0, countF = 0;

    for (int i = 0; i < n; i++) {
        char grade = getGrade(scores[i]);
        cout << left << setw(10) << (i + 1) 
             << setw(10) << scores[i] 
             << grade << endl;

        switch (grade) {
            case 'A': countA++; break;
            case 'B': countB++; break;
            case 'C': countC++; break;
            case 'D': countD++; break;
            case 'F': countF++; break;
        }
    }

    cout << "\nstudent in class gread" << endl;
    cout << "A: " << countA << endl;
    cout << "B: " << countB << endl;
    cout << "C: " << countC << endl;
    cout << "D: " << countD << endl;
    cout << "F: " << countF << endl;
  
    delete[] scores;
    
}