#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    fstream myFile;
    myFile.open("Raghul.txt",ios::out);
    if(myFile.is_open()) {
        myFile<<"Hello\n";
        myFile<<"World\n";
        myFile.close();
    }
    fstream myFile2;
    myFile2.open("Raghul.txt",ios::app);
    if(myFile2.is_open()) {
        myFile2<<"Hi\n";
        myFile2<<"Everyone\n";
        myFile2.close();
    }
    fstream fileRead;
    fileRead .open("Raghul.txt",ios::in);
    if(fileRead.is_open()) {
        string readLines;
        while(getline(fileRead,readLines)) {
            cout<<readLines<<endl;
        }
    }
    fstream myfile3;
    myfile3.open("Raghul.txt",ios::app);
    if(myfile3.is_open()) {
        myfile3.seekp(30,ios::cur);
        myfile3<<"Good Morning"<<endl;
    }
}
    