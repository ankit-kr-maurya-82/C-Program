#include<stdio.h>
struct myStructure{
    int    Num;
    char myLetter;
};

int main() {
    struct myStructure s1;

    s1.Num = 13;
    s1.myLetter = 'B';
    

    printf("My Number: %d\n", s1.Num);
    printf("My Number: %c\n", s1.myLetter);

    printf("--------------------------------------");
    struct myStructure s2;
    s2.Num = 14;
    s2.myLetter = 'A';
    printf("\nnum: %d\n", s1.Num);
    printf("letter: %c\n", s1.myLetter);
    
    
return 0;
}