#include <stdio.h>

int main(){
    int l,b;
    printf("enter length of rectangle");
    scanf("%d",&l);
    printf("enter breadth");
    scanf("%d",&b);
    int perimeter = 2*(l+b);
    printf("perimeter of rectangle : %d", perimeter);
    return 0;
}