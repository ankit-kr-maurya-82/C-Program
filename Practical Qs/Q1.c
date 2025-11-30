#include<stdio.h>
#include<string.h>
int main() {
    char name[20]="Ankit";
    // strlen
    int length= strlen(name);
    printf("length of string: %d\n", length);
    // strcpy
    char copy[50];
    strcpy(copy, name);
    printf("copy string: %s\n", copy);
    // strcmp
    int cmp = strcmp(name,copy);
    printf("compare string: %d\n", cmp);
    // strcat
    char firstname[40]="Bhrantik";
    char lastname[30]=" Nagar";
    strcat(firstname, lastname);
    printf("add two string: %s\n", firstname);
    // strrev
    strrev(firstname);
    printf("reverse string: %s", firstname);
return 0;
}