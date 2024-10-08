#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cstdlib>  // สำหรับ rand() และ srand()
#include <ctime>    // สำหรับ time()

using namespace std;

const int MAX_STUDENTS = 20;
const int NUM_EXAMS = 3;

struct Student {
    string id;
    string name;
    double scores[NUM_EXAMS]; // ใช้ array เพื่อเก็บคะแนน
    double totalScore;
    double averageScore;
};

// ฟังก์ชันเพื่อสร้างรหัสสุ่ม
string generateID() {
    string id = to_string(rand() % 100000); // สุ่มเลข 5 หลัก
    while (id.length() < 5) {
        id = '0' + id; // เพิ่ม 0 ที่ข้างหน้าให้ครบ 5 หลัก
    }
    return id;
}

// ฟังก์ชันเพื่อสุ่มชื่อจากลิสต์
string generateRandomName() {
    const string names[] = {
        "John", "Jane", "Alice", "Bob", "Charlie", "Diana", "Eva", "Frank", "Grace", "Henry"
    };
    return names[rand() % (sizeof(names) / sizeof(names[0]))]; // สุ่มเลือกชื่อจากลิสต์
}

void getData(Student students[], int numStudents);
void sortData(Student students[], int numStudents);
void calculateAverage(Student students[], int numStudents, double avgScores[]);
void displayData(const Student students[], int numStudents, const double avgScores[]);


int main() {
    srand(time(0)); // กำหนด seed สำหรับการสุ่ม
    Student students[MAX_STUDENTS]; // กำหนด array สำหรับนักเรียน
    double avgScores[NUM_EXAMS] = {0}; // Array to store average scores for each exam

    getData(students, MAX_STUDENTS);
    calculateAverage(students, MAX_STUDENTS, avgScores);
    sortData(students, MAX_STUDENTS);
    displayData(students, MAX_STUDENTS, avgScores);

    return 0;
}

void getData(Student students[], int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        students[i].id = generateID(); // สุ่มรหัส
        students[i].name = generateRandomName(); // สุ่มชื่อ
        
        // กำหนดการสุ่มคะแนนสำหรับแต่ละ test
        students[i].scores[0] = static_cast<double>(rand() % 26); // Test1: สุ่มคะแนน 0-25
        students[i].scores[1] = static_cast<double>(rand() % 26); // Test2: สุ่มคะแนน 0-25
        students[i].scores[2] = static_cast<double>(rand() % 51); // Test3: สุ่มคะแนน 0-50
    }
}

void calculateAverage(Student students[], int numStudents, double avgScores[]) {
    for (int i = 0; i < numStudents; i++) {
        //students[i].totalScore = 0;
        for (int j = 0; j < NUM_EXAMS; j++) {
            students[i].totalScore += students[i].scores[j]; // รวมคะแนน
            avgScores[j] += students[i].scores[j]; // Summing scores for average calculation
        }
    }

    // คำนวณคะแนนรวมที่มีน้ำหนัก
    for (int i = 0; i < numStudents; i++) {
        students[i].totalScore = (students[i].scores[0]) + (students[i].scores[1]) + (students[i].scores[2]);
        students[i].averageScore = students[i].totalScore; // คะแนนรวมเป็นค่าเฉลี่ย
    }

    for (int j = 0; j < NUM_EXAMS; j++) {
        avgScores[j] /= numStudents; // Calculate average for each exam
    }
}

void sortData(Student students[], int numStudents) {
    sort(students, students + numStudents, [](const Student& a, const Student& b) {
        return a.totalScore > b.totalScore; // Sort in descending order
    });
}

void displayData(const Student students[], int numStudents, const double avgScores[]) {
    cout << fixed << setprecision(2);
    cout << "------------------------------------------------------------------------------------\n";
    cout << "No.\tID\tName\tTest1(25%)\tTest2(25%)\tTest3(50%)\tTotal(100%)\n";
    cout << "------------------------------------------------------------------------------------\n";
    for (int i = 0; i < numStudents; i++) {
        const auto& student = students[i];
        cout << i + 1 << ".\t" // หมายเลขลำดับ
             << student.id << "\t" 
             << student.name << "\t"
             << student.scores[0] << "\t\t"
             << student.scores[1] << "\t\t"
             << student.scores[2] << "\t\t"
             << student.totalScore << endl;
    }
    cout << endl;
    cout << "------------------------------------------------------------------------------------\n";
    cout << "\nAverage Scores for Each Exam:\n";
    for (int j = 0; j < NUM_EXAMS; j++) {
        cout << "Average Score " << (j + 1) << ": " << avgScores[j] << endl;
    }
}