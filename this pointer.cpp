#include <iostream>
using namespace std;
class student {
    public:
    void display() {
        cout<<"Hello World";
    }
};
class teacher: public student {
    public:
    void print() {
        cout<<"Hello c++";
    }
};
int main() {
    teacher t;
    t.display();
    t.print();
}