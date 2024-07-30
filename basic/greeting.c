// function that print geeting according to users native(Indian,French)
#include <stdio.h>


void namaste();
void bonjour();

int main(){
    char u;
    printf("enter users native i for indian and f for french :");
    scanf("%c",&u);
    if (u == 'i') {
    // Your code here
    namaste();
    }

    // f(u == "i"){
    //     namaste();

    // }i
    else{
        bonjour();
    }
    return 0;
}

void namaste(){
    printf("Namaste \n");
}
void bonjour(){
    printf("Bonjour \n");
}