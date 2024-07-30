// print factorial of number n
#include <stdio.h>

int main(){
    int fact = 1;
    int n;
    printf("enter number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact*=i;
        printf("%d * %d  \n",fact,i);
    }
    printf("factorial of %d is %d",n,fact);
    return 0;

}