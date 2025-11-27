#include<stdio.h>
int main() {
    int n =25;
    int *x=&n;
    printf("%p\n", n);
    printf("%p\n", x);
    printf("%d", *x);
return 0;
}