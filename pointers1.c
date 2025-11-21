#include<stdio.h>
void change(int *x){
    *x=10;
}

int add(int x, int y){
    return x+y;
}
int main() {
    int a=5;
    change(&a);
    printf("a=%d\n",a);

    int sum;
    sum = add(5,3);
    printf("Sum=%d\n", sum);
return 0;
}