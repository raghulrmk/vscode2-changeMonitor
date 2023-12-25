#include <iostream>
using namespace std;
class student {
    private:
    string studentName;
    long rollno;
    int*marks;
    int length;
    public:
    student(int size, string name, long no): rollno(no),studentName(name),length(size) {
        marks=new int[length];
        for(int i=0; i<length; i++) {
            cout<<"Enter the marks";
            cin>>marks[i];
        } 

    }
    student(student &copy): studentName(copy.studentName), rollno(copy.rollno),length(copy.length) {
        marks=new int[length];
        for(int j=0; j<length; j++ ) {
            marks[j]=copy.marks[j];
        }
        
    }
    void display() {
        cout<<"The name of the student:"<<" "<<studentName<<endl;
        cout<<"The roll of the student:"<<" "<<rollno<<endl;
        for(int k=0; k<length; k++) { 
            cout<<"The marks of the student:"<<" "<<marks[k]<< endl;
        }
    }
    ~student() {
        delete[] marks;
        cout<<"Destructor is implemented";
    }
};
class teacher:public student {
    
};
int main() {
    //string str;
    //cout<<"Enter the name of the student"<<" ";
    //getline(cin,str);
    student s(5,"Raghul B",80);
    s.display();
    student s1(s);
    s1.display();
    student s2(5,"Melwin",56);
    s2.display();
    student s3(s1); 
}