#include<stdio.h>

int main() {
    char greetings[] = "hello world!";
    printf("%s\n", greetings);
    printf("%c\n", greetings[0]);
    greetings[0]= 'J';
    printf("%s\n", greetings);

    char carName[] = "BMW";
    for (int i=0; i<3 ; i++){
        printf("%c ",carName[i]);
    }
    printf("\n");
    char StudentName[]="Bhrantik Nagar";
    int length = sizeof(StudentName);
    printf("%s : %d\n", StudentName, length);

    for (int i=0; i<length; i++){
        printf("%c", StudentName[i]);
    }
    printf("\n");
    for (int i=0; i<length; i++){
        printf("%d ", i);
    }
    

    
    
return 0;
}