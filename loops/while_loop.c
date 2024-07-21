#include <stdio.h>

int main(){
    int sum = 0 ;
    int n;
    printf("enter number :");
    scanf("%d",&n);
    int i = 1;
    while (i<=n) {
        printf("%d \n",i);
        sum+=i;
        i++;
    }
    printf("sum is %d \n",sum);
    return 0;
}