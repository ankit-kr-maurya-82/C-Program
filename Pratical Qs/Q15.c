#include<stdio.h>
int EvenOdd(int x);
int main() {
    int number;
    printf("enter number: ");
    scanf("%d" ,&number);
    EvenOdd(number);
    return 0;
}
int EvenOdd(int x){
    if(x%2==0)
        printf("Even number");
    else
        printf("Odd number");
}

// 15.  Write a function that takes an integer and returns 1 if it’s even, 0 if it’s odd.
