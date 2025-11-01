#include<stdio.h>

int main(){
    int i,j,n=1;
    for (i=1 ;i<=5; i++)
    {
        printf("\n");
        for(j=1;j<=i;j++){
            printf("%2d", j);
        }
    }


    for (i=1 ;i<=5; i++)
    {
        printf("\n");
        for(j=1;j<=i;j++){
            printf("%2d", i);
        }
    }


    for (i=1 ;i<=5; i++)
    {
        printf("\n");
        for(j=1;j<=i;j++){
            printf("%3d", n++);
        }
    }


    for (i=1 ;i<=5; i++)
    {
        printf("\n");
        for(j=1;j<=i;j++){
            printf("* ");
        }
    }
    


    return 0;
    
}