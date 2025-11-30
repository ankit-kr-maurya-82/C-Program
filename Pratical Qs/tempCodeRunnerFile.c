   int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int result = factorial(n);
    printf("Factorial = %d", result);
    return 0;
}
int factorial(int n) {
    if(n==0 || n==1)  
        return 1;
    else
        return n * factorial(n - 1);
}