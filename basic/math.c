#include <stdio.h>

int main(){
    int a,b;
    printf("enter a :");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    printf("the sum of %d and %d is %d", a,b,a+b);
    printf("the subtraction of %d and %d is %d", a,b,a-b);
    printf("the multiplication of %d and %d is %d", a,b,a*b);
    printf("the division of %d and %d is %d", a,b,a/b);
    return 0;
}