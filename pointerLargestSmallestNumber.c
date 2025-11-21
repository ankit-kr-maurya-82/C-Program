#include<stdio.h>
int main() {
    int n,i;
    printf("Enter the elements of array:");
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;
    printf("Enter %d elements: ",n);
    for (i=0; i<n; i++){
        scanf("%d", (ptr+i));
    }

    printf("Array elements are: ");
    for(i=0;i<n;i++){
        printf("%d ", *(ptr+i));
    }
    printf("\n");

    int largest=*ptr;
    int smallest=*ptr;
    for(i=1;i<n;i++){
        if(*(ptr+i)>largest){
            largest=*(ptr+i);
        }
        if(*(ptr+i)<smallest){
            smallest=*(ptr+i);
        }
    }
    printf("Largest number %d\n",largest);
    printf("Smallest number %d\n",smallest);
    
return 0;
}