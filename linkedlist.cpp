#include <iostream>
using namespace std;
class student {
    public:
    int value;
    student*pt;
};
int n;
int*ptr;
void display(student*ptr) {
    while(ptr!=nullptr) {
        cout<<ptr->value<<endl;
        ptr=ptr->pt;
    }
    
}
void insertelementinListAtfront(student**ptr,int values) {
        student*ptr4=new student();
        ptr4->value=values;
        ptr4->pt=*ptr;
        *ptr=ptr4;
}
void insertelementinListAtback(student**ptr,int values) {
    student*ptr5=new student();
    ptr5->value=values;
    ptr5->pt=nullptr;
    student*findptr;
    findptr=*ptr;
    while(findptr->pt!=nullptr) {
        findptr=findptr->pt;
    }
    findptr->pt=ptr5;
}
void insertElementinmiddle(student**ptr,int values) {
    student*checkptr;
    checkptr=*ptr;
    if(checkptr->pt==nullptr) {
        cout<<"Sorry, the value that you insert after the particular value is the last value"<<endl;
        
    } else{
        student*ptr6=new student();
        ptr6->value=values;
        ptr6->pt=checkptr->pt;
        checkptr->pt=ptr6;
    }
    
}



int main() {
    
    student*ptr1=new student();
    student*ptr2=new student();
    student*ptr3=new student();
    ptr1->value=1;
    ptr1->pt=ptr2;
    ptr2->value=2;
    ptr2->pt=ptr3;
    ptr3->value=3;
    ptr3->pt=nullptr;
    /*cout<<ptr1->value<<endl;
    cout<<ptr1->pt<<endl;
    cout<<ptr2->value<<endl;
    cout<<ptr2->pt<<endl;
    cout<<ptr3->value<<endl;
    cout<<ptr3->pt<<endl; */
    
    insertelementinListAtfront(&ptr1,0);
    insertelementinListAtfront(&ptr1,0);
    insertelementinListAtback(&ptr1,4);
    insertElementinmiddle(&ptr2,10);
    insertElementinmiddle(&ptr1,11);
    insertElementinmiddle(&ptr2,12);
    display(ptr1);
 
    
}