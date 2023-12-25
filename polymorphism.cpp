#include <iostream>
using namespace std;
class student {
    protected:
    string ownername;
    string ownerhousename;
    public:
    student(string name, string housename):ownername(name),ownerhousename(housename) {}
};
class teacher:public student {
    public:
    teacher(string name, string housename): student(name,housename) {}
    void display() {
        cout<<"The ownername:"<<" "<<ownername<<endl;
        cout<<"The house name:"<<" "<<ownerhousename<<endl;
    }
};
class hod:public student {
    public:
    hod(string name, string housename): student(name,housename) {}
    void display() {
        cout<<"The ownername:"<<" "<<ownername<<endl;
        cout<<"The house name:"<<" "<<ownerhousename<<endl;
    }
        
    
};
int main() {
    teacher t("Raghul","Raghul's House");
    t.display();
    hod h("Balaji Nalini","BN House");
    h.display();
}