#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if ((ch >= '0' && ch <= '9')) {
        printf("The character '%c' is a number.\n", ch);
    } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("The character '%c' is an alphabet.\n", ch);
    } else {
        printf("The character '%c' is a special character.\n", ch);
    }

    if (isalnum(ch)) {
        printf("'%c' is alphanumeric.\n", ch);
    } else {
        printf("'%c' is not alphanumeric.\n", ch);
    }

    if (isblank(ch)) {
        printf("'%c' is a blank character.\n", ch);
    } else {
        printf("'%c' is not a blank character.\n", ch);
    }

    if (isalpha(ch)) {
        printf("'%c' is an alphabetic character.\n", ch);
    } else {
        printf("'%c' is not an alphabetic character.\n", ch);
    }

    if (iscntrl(ch)) {
        printf("'%c' is a control character.\n", ch);
    } else {
        printf("'%c' is not a control character.\n", ch);
    }

    if (isdigit(ch)) {
        printf("'%c' is a digit.\n", ch);
    } else {
        printf("'%c' is not a digit.\n", ch);
    }

    if (isupper(ch)) {
        printf("'%c' is an uppercase character.\n", ch);
    } else {
        printf("'%c' is not an uppercase character.\n", ch);
    }

    if (islower(ch)) {
        printf("'%c' is a lowercase character.\n", ch);
    } else {
        printf("'%c' is not a lowercase character.\n", ch);
    }

    if (isxdigit(ch)) {
        printf("'%c' is a hexadecimal digit.\n", ch);
    } else {
        printf("'%c' is not a hexadecimal digit.\n", ch);
    }

    if (isgraph(ch)) {
        printf("'%c' is a graphical character.\n", ch);
    } else {
        printf("'%c' is not a graphical character.\n", ch);
    }

    return 0;
}
