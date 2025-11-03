#include<stdio.h>
#include<string.h>
int main(){
    // 1) program to length one string  using strlen()
    // char stud1[20]= "Ankit Kumar Maurya";
    // int length;
    // length = strlen(stud1);
    // printf("%d", length);
    
    // 2) program to copy one string to another using strcpy()
    // char strcopy;
    
    //  char s1[]= "Ankit";
    // char s2[50];
    // strcpy(s2, s1);
    // printf("%s", s2);

    // 3) program to compare two string  using strcmp()
    // char s1[20]= "apple";
    // char s2[50]= "banana";
    // int cmp = strcmp(s1 , s2);
    // printf("%d", cmp);

    // 4 program to compare two string  using strcat()
    // char s1[20]= "Hello";
    // char s2[50]= "World";
    // strcat(s1 , s2);
    // printf("%s", s1);

    // 5 program to compare two string  using strrev()
    char s1[20]= "Ankit";
    strrev(s1);
    printf("%s", s1);
    return 0;
}