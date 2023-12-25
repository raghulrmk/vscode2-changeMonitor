#include <iostream>
using namespace std;
class student {
    public:
    virtual void display() {
        cout<<"Hello c++";
    }
};
class teacher:public student {
    public:
    void display() {
        cout<<"Hello python";
    }
};
class hod:public student {
    public:
    void display() {
        cout<<"Hello java";
    }
};
int main() {
    student*i1=new hod();
    i1->display();
}