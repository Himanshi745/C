#include <stdio.h>
#include<math.h>

int main(){
    int num,power;
    printf("enter number :");
    scanf("%d",&num);
    printf("enter power :");
    scanf("%d",&power);
    int p=pow(num,power);
    printf("%d raise to the power %d is %d",num,power,p);
    return 0;
}