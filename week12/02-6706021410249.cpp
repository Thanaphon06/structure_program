#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <vector>

using namespace std;

// ฟังก์ชันเพื่อคำนวณคะแนนและเปอร์เซ็นต์
void calculateVotes(int numStudentChairman, const vector<int>& votes, int totalVotes) {
    cout << endl;
    cout << "Result of election chairman" << endl;
    cout << "---------------------------" << endl;
    cout << "No. Votes Percent(%)" << endl;
    cout << "---------------------------" << endl;

    for (int i = 0; i < numStudentChairman; i++) {
        double percent = (static_cast<double>(votes[i]) / totalVotes) * 100;
        cout << i + 1 << "." << setw(5) << votes[i] << " " << fixed << setprecision(2) << setw(6) << percent << "%"<< endl;
    }

    cout << "---------------------------" << endl;
    cout << "Total " << totalVotes << " 100.00%" << endl;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // ตั้ง seed สำหรับการสุ่ม

    const int totalStudents = 500;
    int numStudentChairman = rand() % (totalStudents) + 1; // สุ่มจำนวนผู้สมัคร 1 ถึง totalStudents

    cout << "Number of student chairman: " << numStudentChairman << endl;
    cout << endl;

    // กำหนดขนาดของอาเรย์คะแนนเสียงตามจำนวนผู้สมัคร
    vector<int> votes(numStudentChairman, 0); // อาเรย์เก็บคะแนนเสียงสำหรับแต่ละผู้สมัคร

    // สุ่มการโหวต
    int studentsVoted = 0;

    for (int i = 0; i < totalStudents; i++) {
        // กำหนดโอกาสที่จะไม่ลงคะแนนเสียง (30% ที่จะไม่ลงคะแนน)
        if (rand() % 100 < 30) {
            continue; // ไม่ลงคะแนนเสียง
        }
        // สุ่มคะแนนให้กับผู้สมัคร
        int randomVote = rand() % numStudentChairman; 
        votes[randomVote]++;
        studentsVoted++;
    }

    int notVotes = totalStudents - studentsVoted; // จำนวนคนที่ไม่ลงคะแนนเสียง

    // แสดงผลคะแนนและเปอร์เซ็นต์
    cout << "Number of right student: " << totalStudents << endl;
    cout << "Number of Votes: " << studentsVoted << " = " << fixed << setprecision(1) << (static_cast<double>(studentsVoted) / totalStudents * 100) << "%" << endl;
    cout << "Number of not Votes: " << notVotes << " = " << fixed << setprecision(1) << (static_cast<double>(notVotes) / totalStudents * 100) << "%" << endl;

    calculateVotes(numStudentChairman, votes, studentsVoted);

    return 0;
}