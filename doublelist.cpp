#include <iostream>
using namespace std;
class student {
    public:
    int value;
    student*previousptr;
    student*nextptr;
};
void insertElementatback(student**ptr) {
    student*ptr2=new student();
    ptr2->value=2;
    student*checkptr;
    checkptr=*ptr;
    if(checkptr->nextptr==nullptr) {
        checkptr->nextptr=ptr2;
    }
    ptr2->previousptr=*ptr;
    ptr2->nextptr=nullptr;
}
void insertElementatfront(student**ptr) {
    student*ptr3=new student();
    ptr3->value=0;
    student*checkptr;
    checkptr=*ptr;
    if(checkptr->previousptr==nullptr) {
        checkptr->previousptr=ptr3;
    }
    ptr3->previousptr=nullptr;
    ptr3->nextptr=*ptr;
    *ptr=ptr3;
}
void insertElementatmiddle(student**ptr) {
    student*ptr4=new student();
    ptr4->value=3;
    student*checkptr;
    checkptr=*ptr;
    student*foundptr;
    foundptr=checkptr->nextptr;
    if(foundptr->nextptr==nullptr) {
        cout<<"You cant add it";
    } else {
        ptr4->nextptr=foundptr->nextptr;
        ptr4->previousptr=foundptr;
        foundptr->nextptr=ptr4;
        student*finalptr;
        finalptr=ptr4->nextptr;
        finalptr->previousptr=ptr4;

    }
}
void displayatforward(student**ptr) {
     student*checkptr;
     checkptr=*ptr;
     while(checkptr) {
        cout<<checkptr->value<<endl;
        if(checkptr->nextptr==nullptr) {
            break;
        }
        checkptr=checkptr->nextptr;
     }
     cout<<endl;

}

void displayatbackward(student**ptr) {
    student*checkptr;
    student*foundptr;
    checkptr=*ptr;
    while(checkptr) {
        if(checkptr->nextptr==nullptr) {
            foundptr=checkptr;
            break;
        }
        checkptr=checkptr->nextptr;
    }
    while(foundptr) {
        cout<<foundptr->value<<endl;
        if(foundptr->previousptr==nullptr) {
            break;
        }
        foundptr=foundptr->previousptr;
    } 
}

int main() {
    student*ptr1=new student();
    ptr1->value=1;
    ptr1->previousptr=nullptr;
    ptr1->nextptr=nullptr;
    insertElementatback(&ptr1);
    insertElementatfront(&ptr1);
    insertElementatmiddle(&ptr1);
    displayatforward(&ptr1);
    displayatbackward(&ptr1);
}