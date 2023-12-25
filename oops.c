#include <stdio.h>
int*arrayFunction(int*ptr) {
    for(int i=0; i<5;i++) {
        printf("Enter a number \n");
        scanf("%d",&ptr[i]);
        
    }
    return ptr;
}
int main() {
    int arr1[100];
    int*ptr=arrayFunction(arr1);
    for(int i=0; i<5; i++) {
      printf("%d ",*(ptr+i));
    }
    
    
}