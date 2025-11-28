#include<stdio.h>
#include<string.h>
int main(){
    char s1[20]="harsh";
    char s2 [50]="\ttiwari";
    strcat(s1,s2);
    printf("%s",s1);
    // char s1[20]= "Hello";
    // char s2[50]= "\tWorld ";
    // strcat(s1 , s2);
    // printf("join of two str = %s", s1);
    return 0;
}


// 4 program to concatnate(join) two string  using strcat()