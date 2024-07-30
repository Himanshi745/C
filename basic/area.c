// area of shapes using library functions
#include <stdio.h>
#include <math.h>

float squarearea(float side);
float rectanglearea(float a,float b);
float circlearea(float rad);

int main(){
    int a,b;
    int side;
    int rad;
    printf("enter number :");
    scanf("%f", &a);
    printf("enter number :");
    scanf("%f",&b);
    printf("enter number :");
    scanf("%f",&side);
    printf("enter number :");
    scanf("%f",&rad);

    printf("Area of square %f \n",squarearea(side));
    printf("Area of rectangle %f \n",rectanglearea(a,b));
    printf("Area of circle %f \n",circlearea(rad));

    return 0;
}

float squarearea(side){
    return side * side  ;
}

float rectanglearea( a, b){
    return a * b ;
}

float circlearea( rad){
    return 3.14 * rad * rad ;
}