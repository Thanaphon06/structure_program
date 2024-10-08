#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {

    ifstream Infile;
    ofstream OutFile;
    bool inWord = false;  // ใช้เพื่อติดตามว่าเราอยู่ในคำหรือไม่
    
    string text, yaimak = "yee.txt";
    
    int wordCount = 0, sentenceCount = 0;
    
    // เขียนข้อมูลลงไฟล์
    OutFile.open(yaimak.c_str());
    cout << "Enter a paragraph: ";
    getline(cin, text);  // ใช้ getline เพื่ออ่านทั้งบรรทัดรวมถึงช่องว่าง
    OutFile << text;
    cout << endl;
    OutFile.close();
    
    // เปิดไฟล์เพื่ออ่านข้อมูล
    Infile.open(yaimak.c_str());

    // เริ่มนับคำและประโยค
    char c;
    while (Infile.get(c)) {  // อ่านตัวอักษรทีละตัวจากไฟล์
        // นับคำ
        if (isspace(c)) {  // ถ้าเจอช่องว่าง แสดงว่าจบคำ
            if (inWord) {
                wordCount++;
                inWord = false;  // ออกจากสถานะอยู่ในคำ
            }
        } else {
            inWord = true;  // ถ้าไม่ใช่ช่องว่างแสดงว่าเราอยู่ในคำ
        }

        // นับประโยค
        if (c == '.' || c == '?' || c == '!') {
            sentenceCount++;
        }
    }

    // เพิ่มคำสุดท้ายถ้ามี
    if (inWord) {
        wordCount++;
    }

    Infile.close();  

    // แสดงผลการนับ
    cout << "Number of words: " << wordCount << endl;
    cout << "Number of sentences: " << sentenceCount << endl;

}
