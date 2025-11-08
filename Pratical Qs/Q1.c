#include<stdio.h>
int main(){
    // 1. Write a program to declare an array of 5 strings (each for a student's name) and display them one by one.

    char st_name[5][50] = {"Ankit", "Bhrantik", "Akshat", "Shakib", "Chitra"};
    for(int i=0; i<5; i++){
        printf("student %d = %s\n",i+1,st_name[i]);
    }
    return 0;
}