#include <stdio.h>

int main(){
    int sum=0;
    int n;
    printf("enter number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
        printf("%d \n",i);
    }
    printf(" sum is %d \n",sum);
    return 0;
}