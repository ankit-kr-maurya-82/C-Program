#include<stdio.h>
void sumArr();

int main() {
    sumArr();
    return 0;
}

void sumArr(){
    int sum=0;
        int num[5]={10,20,30,40};

    for (int i = 0; i < 5; i++){
        sum+=num[i];
    }
    printf("sum: %d",sum);
    
}