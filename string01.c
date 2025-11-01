#include<stdio.h>
#include<string.h>
int main(){
    // program to length one string  using strlen()
    // char stud1[20]= "Ankit Kumar Maurya";
    // int length;
    // length = strlen(stud1);
    // printf("%d", length);
    
    // program to copy one string to another using strcpy()
    // char strcopy;
    
    // char s1[]= "Ankit";
    // char s2[50];
    // strcpy(s2, s1);
    // printf("%s", s2);

    // program to compare two string  using strcmp()
    // char s1[20]= "apple";
    // char s2[50]= "banana";
    // int cmp = strcmp(s1 , s2);
    // printf("%d", cmp);
    // program to compare two string  using strcat()
    // char s1[20]= "Hello";
    // char s2[50]= "World";
    // strcat(s1 , s2);
    // printf("%s", s1);
    // program to compare two string  using strrev()
    // char s1[20]= "Ankit";
    // strrev(s1);
    // printf("%s", s1);

    // String array 2D Array
    char fruits[3][10] = {"Apple", "Banana", "Cherry"};
    // printf("%s", fruits[1,2]);
    printf("%c", fruits[1][2]);
    return 0;
}