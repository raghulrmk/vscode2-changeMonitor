#include <stdio.h>
#include <stdlib.h>
int main() {
    int*ptr;
    int*Ptr;
    ptr=(int*)calloc(7,sizeof(int));
    if(ptr==NULL) {
        printf("There is no memory allocated");
    }
    
    for(int i=0; i<5; i++) {
        printf("%d ",*(ptr+i));
    }
    printf("\n");
    ptr=(int*)realloc(ptr,2*sizeof(int)); 
    for(int i=0; i<7; i++) {
        printf("%d ",*(ptr+i));
    }
   

}