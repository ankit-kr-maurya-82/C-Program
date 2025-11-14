#include<stdio.h>
int largestNumber(int a, int b, int c);
int main() {
    int x,y,z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x,&y,&z);
    int biggestNumber = largestNumber(x,y,z);
    printf("Largest number: %d\n", biggestNumber);
    return 0;
}

int largestNumber(int a, int b, int c){
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
    else
        return c;
}
// 12.  Write a function that accepts three integers as arguments and returns the largest.
