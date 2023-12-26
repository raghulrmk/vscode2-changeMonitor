#include <iostream>
using namespace std;
class student {
    public:
    int values;
    student*pt;
};
void display(student*ptr) {
     while(ptr->pt!=nullptr) {
        cout<<ptr->values;
        ptr=ptr->pt;
     }
}
void addElement(student**ptr,int values) {
    student*ptr2=new student();
    ptr2->values=values;
    student*ptr3=new student();
    ptr2->pt=ptr3;
}
int main() {
    student*ptr1=new student();
    addElement(&ptr1,0);
    display(ptr1);
}
