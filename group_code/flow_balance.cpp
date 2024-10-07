#include <iostream>
using namespace std;
int main(){

 float balacne , pay_per_mouth;

 cout << "Please Enter your balacne : ";
 cin >> balacne;
 
 cout << "Enter You spent per mouth :";
 cin >> pay_per_mouth;

 float result = balacne / pay_per_mouth;

 if (result > 3)
 {
    cout << "3";
    //แสดง มีเงินสำรองไว้ใช้จ่ายยามฉุกเฉิน ลดโอกาสการรบกวนเงินลงทุน
   //เพื่ออนาคตมาใช้จ่าย หรือการก่อหนี้เพิ่ม

 }
 else if (result < 3)
 {
    cout << "<3";
    //แสดง มีเงินน้อยเกินไป มีโอกาสการรบกวนเงินลงทุนหรือการก่อหนี้เพิ่ม
 }
 else{
    cout << "Try again";
 }
 
 

}