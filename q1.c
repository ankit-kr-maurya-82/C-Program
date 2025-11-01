#include<stdio.h>
void test(){
     static int x=0;
    x++;
    printf("%d",x);
    
}
int main(){
   test();
   test();
   test();
   test();
    return 0;
}

