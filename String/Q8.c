#include<stdio.h>
#include<string.h>

int stringLength(char str[]){
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++){
        length++;
    }
    return length;
    
}

int main(){

    //    Length in String
    int length = stringLength("Ankit");
    printf("The length of the strings is: %d", length);

    
    return 0;
}