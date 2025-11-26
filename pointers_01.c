#include<stdio.h>
int main() {
    int n =5;
    int *x=&n;
    printf("%p\n", n);
    printf("%p", x);
return 0;
}