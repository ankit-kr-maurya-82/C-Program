#include<stdio.h>
void swapNumber(int a, int b);
int main() {
    int a=10,b=20;
    printf("before swaping number \na=%d \nb=%d\n",a,b);
    swapNumber(a,b);

return 0;
}

void swapNumber(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    printf("swap Number a=%d\n",a);
    printf("swap Number b=%d\n",b);
}

// 13.  Write a function to swap two numbers using pass-by-value and show that original values do not change.
