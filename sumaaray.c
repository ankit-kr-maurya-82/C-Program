#include<stdio.h>
void sumArr();

int main() {
    
    sumArr();
    return 0;
}

// void sumArr(){
//     int sum=0;
//     int num[5]={10,20,30,40};

//     for (int i = 0; i < 5; i++){
//         sum+=num[i];
//     }
//     printf("sum: %d",sum);
    
// }


void sumArr(){
    int sum=0, i;
    int num[5];
    printf("Enter 5 numbers: ");
    for (i =0; i<5; i++){
        printf("num[%d]:",i);
        scanf("%d", &num[i]);
    }
    

    for (i = 0; i < 5; i++){
        sum+=num[i];
    }
    printf("sum: %d",sum);
    
}