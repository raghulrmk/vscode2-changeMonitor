#include <iostream>
using namespace std;
class primeNumber {
    int numberPrime;
    public:
    void getdata() {
        cout<<"Enter the number to find out its prime";
        cin>>numberPrime;
    }
    void displayPrime() {
        for(int i=numberPrime-1; i>=1; i--) {
            if(i==1) {
                cout<<"Its a prime number";
                break;
            }
            if(numberPrime%i==0) {
                cout<<"Its not a prime number";
                break;
            } 

        }
    }
};
int main() {
    primeNumber pm;
    pm.getdata();
    pm.displayPrime();
}