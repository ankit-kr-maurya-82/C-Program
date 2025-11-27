#include<stdio.h>

int main() {
    int marks[5] = {90,93,84,95,76};
    printf("%d\n", marks[0]);
    printf("%d\n", marks[1]);

    for(int i=0;i<5;i++){
        printf("%d ",marks[i]);
    }

    
return 0;
}