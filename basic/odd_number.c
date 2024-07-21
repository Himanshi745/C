//keep taking numbers as input from user until user enters an odd number
#include <stdio.h>

// int main(){
//     int n;
//     printf("enter a number :");
//     scanf("%d",&n);
//     while(n%2==0){
//         printf("enter another number :");
//         scanf("%d",&n);
//         printf("%d is odd number",n);
//     }
//     return 0;
// }

int main(){
    int n;
    do{
        printf("enter number : ");
        scanf("%d",&n);
        printf("%d \n",n);

        if (n%2!=0){
            break;
        }
    }while(1);
    printf("Thank You");
    return 0;
    
}