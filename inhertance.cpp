#include <iostream>
#include <memory>
#include <string>
using namespace std;
class studentAcadamic {
  protected:
  string studentName;
  int rollno;
  string joinDate;
  int size;
  unique_ptr<int[]>dynamicArray1;

};
class studentSports: public studentAcadamic {
    protected:
    string playerName;
    int jesseyNumber;
    int matchLost;
    int matchWon;
    int length;
    unique_ptr<int[]>dynamicArray2;
    public:
    void getdata1() {
        cout<<"Enter the student name"<<" ";
        getline(cin,studentName);
        cout<<"Enter the rollno name"<<" ";
        cin>>rollno;
        cout<<"Enter the joining date of the student"<<" ";
        cin>>joinDate;
        cout<<endl; 
    }
    void displaydata1() {
        cout<<"The name of the student:"<<" "<<studentName<<endl;
        cout<<"The register or rollno of the student:"<<rollno<<endl;
        cout<<"The join date of the student:"<<joinDate<<endl;
    }
    
};
class studentPerInformation: public studentAcadamic {
    protected:
    string personName;
    string fatherName;
    string motherName;
    string nationality;
    string ambition;
    string hobbies;
    public:
    void getmarks1() {                                                                                               
        cout<<"Enter the size"<<" ";
        cin>>size;
        dynamicArray1=make_unique<int[]>(size);
        for(int i=0; i<size; i++) {
            cout<<"Enter the marks of the student"<<" ";
            cin>>dynamicArray1[i];
        }
        for(int i=0; i<size; i++) {
            cout<<"The marks of the student:"<<" "<<dynamicArray1[i]<<endl;
        }
    }
};
class studentmergeinformation: public studentSports, public studentPerInformation {
    public:
    
    void getdata2() {
        cout<<"Enter the player name:"<<" ";
        cin>>playerName;
        cout<<"Enter the jesseyNumber:"<<" ";
        cin>>jesseyNumber;
        cout<<"How many matches lost by the player"<<" ";
        cin>>matchLost;
        cout<<"How many matches won by the players"<<" ";
        cin>>matchWon;
        cout<<"Enter the length of the championYear:"<<" ";
        cin>>length;
    }
    void displaydata2() {
        cout<<"The name of the player:"<<" "<<playerName<<endl;
        cout<<"The jessey number of the player:"<<jesseyNumber<<endl;
        cout<<"The no of matches lost by the player:"<<" "<<matchLost<<endl;
        cout<<"The no of matches won by the player:"<<" "<<matchWon<<endl;
        dynamicArray2=make_unique<int[]>(length);
        for(int i=0; i<length; i++) {
            cout<<"Enter the years the player became the champion"<<" ";
            cin>>dynamicArray2[i];
        }
        for(int i=0; i<length; i++) {
            cout<<"The year the player became champion"<<" "<<dynamicArray2[i]<<endl;

        }

    }
    void getdata3 () {
        cout<<"Enter the person name:"<<" ";
        cin>>personName;
        cout<<"Enter the person's father name:"<<" ";
        cin>>fatherName;
        cout<<"Enter the person's mother name:"<<" ";
        cin>>motherName;
        cout<<"Enter the person's nationality:"<<" ";
        cin>>nationality;
        cout<<"Enter the person's ambition"<<" ";
        cin>>ambition;
        cout<<"Enter the person's hobbies"<<" ";
        cin>>hobbies;
    }
    void displaydata3() {
        cout<<"The name of the person:"<<" "<<personName<<endl;
        cout<<"The person's father name:"<<" "<<fatherName<<endl;
        cout<<"The person's mother name:"<<" "<<motherName<<endl;
        cout<<"The person's nationality:"<<" "<<nationality<<endl;
        cout<<"The person's ambition:"<<" "<<ambition<<endl;
        cout<<"The person's hobbies"<<" "<<hobbies<<endl;
    }
    void hello() {
        cout<<"Hello world";
    }
};

int main() {
    studentmergeinformation m;
    studentmergeinformation*ptr=&m;
    ptr->getdata1();
    ptr->displaydata1();
    ptr->getmarks1();
    ptr->getdata2();
    ptr->displaydata2();
    ptr->getdata3();
    ptr->displaydata3();
    ptr->hello();

    
}