//To check if a student passed or fail
#include <stdio.h>

int main(){
    int marks;
    printf("enter marks of student :");
    scanf("%d",&marks);
    if(marks>30 && marks<=100){
        printf("the student Passed with %d marks",marks);
    }
    else if (marks<=30 && marks>=0){
        printf("the student Failed with %d marks",marks);
    }
    return 0;
}