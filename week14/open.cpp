#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file("pop.txt");  // ชื่อไฟล์ที่ต้องการอ่าน
    string line;
    int w_cout = 0;
    if (file.is_open()) {
        while (getline(file, line) && w_cout < 25 ) {  // อ่านไฟล์ทีละบรรทัด
            cout << line << endl;
            w_cout++;

            if (w_cout == 24)
            {
                char Wait;
                
                cout << "\nPress Enter to continue";
                cin.get(Wait);
                w_cout = 0;
            }
            
            
        }
        
        file.close();  // ปิดไฟล์เมื่ออ่านเสร็จ
    } else {
        cout << "ไม่สามารถเปิดไฟล์ได้" << endl;
    }

}
