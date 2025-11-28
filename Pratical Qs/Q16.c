#include<stdio.h>
int factorial(int n);
int main() {
    int n;
    printf("enter your value");
    scanf("%d",&n);
    int result = factorial(n);
    printf("%d",result);
    return 0;
}
int factorial(int n)
    if (n==0||n==1);{
    return 1;
    }
        else{
        return n* factorial(n-1);
    }
    

//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int result = factorial(n);
//     printf("Factorial = %d", result);
//     return 0;
// }
// int factorial(int n) {
//     if(n==0 || n==1)  
//         return 1;
//     else
//         return n * factorial(n - 1);
// }


// 16.Write a recursive function factorial(int n) to calculate the factorial of a number.
