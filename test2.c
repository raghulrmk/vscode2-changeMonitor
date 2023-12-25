#include <stdio.h>
typedef int marks;
struct student {
    marks age;
    
}s1;
void function(struct student*ptr) {
    printf("%d",ptr->age);
}
int main() {
    s1.age=10;
    function(&s1);
}