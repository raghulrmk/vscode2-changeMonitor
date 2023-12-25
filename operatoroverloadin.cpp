#include <iostream>
#include <string>
#include <list>
using namespace std;
struct student {
    string name;
    int rollno;
    student(string Name, int regNo): name(Name),rollno(regNo) {}
};
struct studentInfo {
    list<student>names;
};
ostream& operator<<(ostream& COUT, student& stud) {
    COUT<<"The student Name:"<<stud.name<<endl;
    COUT<<"The reg or rollno of the student:"<<stud.rollno<<endl;
}
void operator+=(studentInfo& in, student& stud) {
    in.names.push_back(stud);
    
}
ostream& operator<<(ostream& COUT, studentInfo& in) {
    for(student s:in.names) {
        cout<<s<<endl;
    }
}
void operator-=(studentInfo& info, student& stude ) {
    info.names.remove(stude);
}

int main() {
    student s1=student("Raghul",80);
    student s2=student("Rakesh",83);
    cout<<s1;
    cout<<s2;
    studentInfo i1;
    studentInfo i2;
    i1+=s1;
    i2+=s2;
    cout<<i1;
    cout<<i2;
    
}