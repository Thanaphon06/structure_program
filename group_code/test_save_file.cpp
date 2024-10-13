#include <iostream>
#include <fstream>
using namespace std;

int main(){

    ofstream save_file;
    string name_of_file = "test.txt";

    

    save_file.open(name_of_file.c_str());
        save_file << "yee";
    save_file.close();


}