#include <stdio.h>

int main(){
    int sum = 0 ;
    int n ;
    printf("enter number :");
    scanf("%d",&n);
    int i = 1 ;
    do{
        printf("%d \n",i);
        sum+=i;
        i++;
    }while(i<=n);
    printf("sum is %d \n",sum);
    return 0 ;
}