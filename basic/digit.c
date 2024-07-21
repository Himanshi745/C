#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Ask the user to input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("The character '%c' is a digit.\n", ch);
    } else {
        printf("The character '%c' is not a digit.\n", ch);
    }

    return 0;
}
