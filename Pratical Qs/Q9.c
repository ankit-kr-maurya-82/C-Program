#include <stdio.h>
int getNumber() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);   
    return num;         
}
int main() {
    int value = getNumber(); 
    printf("Your entered: %d", value);
    return 0;
}

// 9. Write a function getNumber() that takes no input but asks the user to enter a number and returns it to main().