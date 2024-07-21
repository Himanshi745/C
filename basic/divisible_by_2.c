#include <stdio.h>

int main(){
    int num; 
    printf("enter a number : ");
    scanf("%d",&num);
    if (num % 2 ==0){
        printf("%d is divisible by 2",num);
    }else{
        printf("%d not divisible by 2",num);
    }
    return 0;
}