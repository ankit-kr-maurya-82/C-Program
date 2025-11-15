#include<stdio.h>
int EvenOdd(int x);
int main() {
    int number;
    printf("enter number: ");
    scanf("%d" ,&number);
    int returnValue =EvenOdd(number);
    printf("%d",returnValue);
    return 0;
}
int EvenOdd(int x){
    if(x%2==0)
        return 1;
    else
        return 0;
}

// 15.  Write a function that takes an integer and returns 1 if it’s even, 0 if it’s odd.
