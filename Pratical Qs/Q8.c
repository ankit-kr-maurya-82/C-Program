#include<stdio.h>
int addf(int a, int b){
    return a+b;
}
int main() {
    int add= addf(4,3);
    printf("%d", add);
    return 0;
}
// 8. Write a function add(int a, int b) that returns the sum of two numbers.