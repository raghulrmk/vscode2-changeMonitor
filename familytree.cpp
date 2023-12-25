#include <iostream>
using namespace std;
class familyTree1 {
    public:
    string name;
    familyTree1*child1;
    familyTree1*child2;
};
auto createNode1(string name) {
    familyTree1*ptr=new familyTree1();
    ptr->name=name;
    ptr->child1=nullptr;
    ptr->child2=nullptr;
    return ptr;
}
void preorder(familyTree1*ptr) {
    if(ptr==nullptr) {return;}
    cout<<ptr->name<<endl;
    preorder(ptr->child1);
    preorder(ptr->child2);
}
void inorder(familyTree1*ptr) {
    if(ptr==nullptr) {return;}
    inorder(ptr->child1);
    cout<<ptr->name<<endl;   
    inorder(ptr->child2);
}
void postorder(familyTree1*ptr) {
    if(ptr==nullptr) {return;}
    postorder(ptr->child1);
    postorder(ptr->child2);
    cout<<ptr->name<<endl;
}
int main() {
    familyTree1*rootNode=createNode1("Shanmuga Mudhaliar");
    // level 1;
    rootNode->child1=createNode1("Devagi");
    rootNode->child2=createNode1("Varalakshmi");
    // level 2;
    rootNode->child1->child1=createNode1("Kaveri");
    rootNode->child1->child2=createNode1("Nalini");

    rootNode->child2->child1=createNode1("Vicky");
    rootNode->child2->child2=createNode1("Abinaya");
    // level 3;
    rootNode->child1->child1->child1=createNode1("Velan");
    rootNode->child1->child2->child1=createNode1("Raghul");

    rootNode->child2->child2->child1=createNode1("Bubesh");
    rootNode->child2->child2->child2=createNode1("Aradhana");
    
    preorder(rootNode);
    cout<<endl;
    inorder(rootNode);
    cout<<endl;
    postorder(rootNode);

}