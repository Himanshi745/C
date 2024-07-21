#include <stdio.h>

int main(){
    float pi=3.14;
    float radius;
    printf("enter radius of circle :");
    scanf("%f",&radius);
    float area=pi*radius*radius;
    printf("area of circle : %f",area);
    return 0;
}