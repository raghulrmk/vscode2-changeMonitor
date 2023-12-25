#include <iostream>
using namespace std;
class student {
    public:
    virtual void display() {
        cout<<"Hello world";
    }
    void displaydata() {
        cout<<"Hello world";
    }
};
class studentInfo: public student {
    public:
    void display() {
        cout<<"HEllo c++";
    }
    void display1() {
        cout<<"Invalid";
    }
};
class studentPer:public student {
    public:
    void display() {
        cout<<"Hello python";
    }
};
int main() {
    student s;
    student*ptr=new studentInfo();
    ptr->display();
    student s1;
    student*ptr=&s;
    ptr->displaydata();
    studentInfo si;
    studentInfo*ptr1=&si;
    ptr1->display();
    student*ptr2=new studentInfo();
    ptr2->display();
    studentInfo si1;
    student*ptr4=&si1;

    
}