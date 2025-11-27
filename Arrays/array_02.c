#include<stdio.h>

int main() {
    // int marks[4]={2,4,5,3};

    // for(int i=0;i<4;i++){
    //     printf("%d ",marks[i]);
    // }


    int marks[5];

    for(int i=0;i<5;i++){
        int a=i+1;
        printf("enter element number %d: ",a);
        scanf("%d", &marks[i]);
    }

    for(int i=0;i<5;i++){
        printf("%d ", marks[i]);
    }
    

    

return 0;
}