#include<stdio.h>
struct myStructure{
    int myNum;
    char myLetter;
};

int main() {
    struct myStructure s1;

    s1.myNum = 13;
    s1.myLetter = 'B';

    printf("My Number: %d\n", s1.myNum);
    printf("My Number: %c\n", s1.myLetter);
    
return 0;
}