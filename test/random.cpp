#include <iostream>

using namespace std;
int main(){

    srand(time(0));//บอกให้สุ่มใหม่ทุกครั่งที่เริ่มโปรแกรม

    int yee = rand() % 20; //สุ่มตัวเลข 0-19
    int year = rand() % 20 + 2000; //สุ่มตั้งแต่ 2000-2020
    char a = 'A' + rand() % 26; //สุ่มตัวอักษร ตัวใหญ่ ถ้าใช่ 'a' 
    //จะสุ่มตัวอักษรตัวเล็ก %26 คือทั้งหมด 26 ตัวอักษร ภาษาอังกฤษ
 
    
}