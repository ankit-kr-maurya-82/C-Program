#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int sub(int a, int b){
    return a-b;
}
int main(){
    int num1, num2, sum;
    printf("enter first number: ");
    scanf("%d", &num1);
    printf("enter second number: ");
    scanf("%d", &num2);
    
    sum = add(num1,num2);
    printf("sum : %d", sum);
    
    return 0; 
}