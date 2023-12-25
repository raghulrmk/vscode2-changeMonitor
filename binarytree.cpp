#include <iostream>
using namespace std;
class student {
    public:
    int values;
    student*child1;
    student*child2;
};
auto insertelementintree(int values) {
    student*ptr1=new student();
    ptr1->values=values;
    ptr1->child1=ptr1->child2=nullptr;
    return ptr1;
}
void displaytreelist(student*ptr) {
    if(ptr!=nullptr) {
        cout<<ptr->values<<endl;
        
    } else {
        
        return;
    }
    displaytreelist(ptr->child1);   
    displaytreelist(ptr->child2);
    
}

void displayelementinorder(student*ptr) {
    if(ptr==nullptr) {
        return;

    }
    displayelementinorder(ptr->child1);
    cout<<ptr->values<<endl;
    displayelementinorder(ptr->child2);
}
void displayelementinpostorder(student*ptr) {
    if(ptr==nullptr) {
        return;
   }
   displayelementinpostorder(ptr->child1);
   displayelementinpostorder(ptr->child2);
   cout<<ptr->values<<endl;
}
   

int main() {
    student*rootNode=insertelementintree(1);
    // level 1
    rootNode->child1=insertelementintree(2);
    rootNode->child2=insertelementintree(3);
    // level 2
    rootNode->child1->child1=insertelementintree(4);
    rootNode->child1->child2=insertelementintree(5);
    rootNode->child2->child1=insertelementintree(6);
    rootNode->child2->child2=insertelementintree(7);
    // level 3
    rootNode->child1->child2->child1=insertelementintree(9);
    rootNode->child2->child2->child1=insertelementintree(15);
    // display process
    displaytreelist(rootNode);
    cout<<endl;
    displayelementinorder(rootNode);
    cout<<endl;
    displayelementinpostorder(rootNode);
}