#include<stdio.h>
int sumOfDigits(int n);
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("sum of digits = %d", sumOfDigits(num));
    return 0;
}

int sumOfDigits(int n){
    if(n==0)
        return 0;
    return(n%10)+sumOfDigits(n/10);
}