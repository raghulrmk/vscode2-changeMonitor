#include <iostream>
#include <memory>
using namespace std;
class student {
   
   string name;
   int studentId;
   int*dynamicArray;
   int size;
   public:
   int overWrite;
   friend void creatingInformation(student);
   student(string Name, int id, int length): name(Name), studentId(id), size(length) {
    cout<<"The name of the student"<<name<<endl;
    cout<<"The register no of the student"<<studentId<<endl;
    dynamicArray=new int[size];
    for(int i=0; i<size; i++) {
        cout<<"Enter a number inside array"<<" ";
        cin>>dynamicArray[i];
    }
    for(int i=0; i<size; i++) {
        cout<<"The number inside the dynamic Array is"<<" "<<dynamicArray[i]<<endl;
    }
   }
   student(student &stud) {
    name=stud.name;
    studentId=stud.studentId;
    size=stud.size;
    dynamicArray=stud.dynamicArray;
    for(int i=0; i<size; i++) {
        cout<<"The number inside the cpy constructor is"<<" "<<dynamicArray[i]<<endl;
    }

   }
   student() {}
   friend student operator+(student st1, student st2);
   friend student operator<<(ostream COUT, student st);

};
student operator<<(ostream COUT, student st) {
    COUT<< st.name;
}
student operator+(student st1, student st2) {
    student st;
    st.name=st1.name+st2.name;
    cout<<st;
}
void creatingInformation(student st) {
    st.name="Raghul";
    st.studentId=3080;
    st.size=3;
    cout<<"The student friend name is"<<st.name<<endl;
    cout<<"The student friend id is"<<st.studentId<<endl;
}

int main() {

    student s1("Raghul",3080,3);
    student s2(s1);
    student s3("Balaji",3081,3);
    s1.overWrite=20;
    creatingInformation(s1);
   
    s1+s2;
    
}