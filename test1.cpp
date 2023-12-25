#include <iostream>
using namespace std;
class student {
    public:
    int age;
};
int main() {
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    student s1[n];
    for(int i=0; i<n; i++) {
        cout<<"Enter a number"<<endl;
        cin>>s1[i].age;
    }
    cout<<endl;
    for(int i=0; i<n; i++) {
        cout<<s1[i].age<<endl;
       
    }

}