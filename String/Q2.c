#include<stdio.h>
#include<string.h>
int main(){  
    char s1[]= "Ankit";
    char s2[50];
    strcpy(s2, s1);
    printf("string copy = %s", s2);
    return 0;
}

// 2) program to copy one string to another using strcpy()