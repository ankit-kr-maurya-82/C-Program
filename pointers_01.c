#include<stdio.h>
int main() {
    // float a =5.0;
    
    // int *x = &a;
    // printf("%p\n",a); 
    // printf("%p\n",*x); 
    // printf("%f",*x); 
    int n =25;
    int *x=&n;
    printf("%p\n", n);
    printf("%p\n", *x);
    printf("%d", *x);
return 0;
}