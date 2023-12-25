#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int array1[n];
    for(int i=0; i<n; i++) {
        cout<<"Enter a number"<<endl;
        cin>>array1[i];
    }
    int random=0;
    int j=0;
    int it=0;
    while(j<100) {
        random=0;
        for(int i=0; i<n-1; i++) {
            if(array1[i]>array1[i+1]) {
                int a= array1[i];
                int b= array1[i+1];
                
                array1[i]=b;
                array1[i+1]=a;

                random+=1;
            }
        }
        if(random==0) {
            
            break;
        }
        it+=1;
        j+=1;
        
    }
    for(int i=0; i<n; i++) {
        cout<<array1[i]<<endl;
    }
    cout<<"Iterartion count:"<<" "<<it;
}