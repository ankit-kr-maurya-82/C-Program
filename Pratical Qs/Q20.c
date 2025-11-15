#include<stdio.h>
void reversePrint(char str[], int index);
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    reversePrint(str, 0);
    return 0;
}
void reversePrint(char str[], int index){
    if(str[index]=='\0')
        return;
    reversePrint(str, index+1);
    printf("%c",str[index]);
}