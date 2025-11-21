#include<stdio.h>
int main() {
    // char ch;
    // printf("Enter a character: ");
    // ch = getchar();
    // printf("you entered: ");
    // putchar(ch);

    char name[30];
    printf("\nEnter your name: ");
    gets(name);
    printf("Hello, ");
    puts(name);
return 0;
}