#include <stdio.h>
#include <conio.h>

int main() {
    char ch;

    printf("Using getch() ");
    ch = getch();
    printf("\nYou entered %c\n", ch);

    printf("Using getche() ");
    ch = getche();
    printf("\nYou entered %c\n", ch);

    printf("Using getchar() ");
    getchar();
    ch = getchar();
    printf("You entered: %c\n", ch);

    char str1[100], str2[100];

    printf("Using scanf() ");
    scanf("%s", str1);
    printf("/n You entered: %s\n", str1);

    while (getchar() != '\n');

    printf("Using gets()");
    gets(str2);
    printf("You entered: %s\n", str2);


    printf("Using printf(): ");
    printf("Hello, World!\n");

    printf("Using puts(): ");
    puts("Hello, World!");

    return 0;
}
