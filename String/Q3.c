#include<stdio.h>
#include<string.h>
int main(){
    char s1[20]= "apple";
    char s2[50]= "banana";
    int cmp = strcmp(s1 , s2);
    printf("strcmp= %d", cmp);      
    return 0;
}


// 3) program to compare two string  using strcmp()