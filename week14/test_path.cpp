#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main() {
    string path = "../week14"; // ระบุ path ของโฟลเดอร์ที่ต้องการดู

    try {
        for (const auto& entry : fs::directory_iterator(path)) {
            cout << entry.path().string() << endl;  // แสดง path ของไฟล์และโฟลเดอร์ทั้งหมดใน directory
        }
    } catch (const fs::filesystem_error& e) {
        cout << "something went wrong: " << e.what() << endl;
    }

    return 0;
}
