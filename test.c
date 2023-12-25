#include <stdio.h>
struct studentMark {
    int marks;
};
int main() {
    int n;
    printf("Enter a number of students marks that you want to save\n");
    scanf("%d",&n);
    struct studentMark m[n];
    for(int  i=0; i<n; i++) {
        scanf("%d",&m->marks);
    }
    printf("\n");
    for(int  i=0; i<n; i++) {
        printf("%d ",m->marks);
    }
}