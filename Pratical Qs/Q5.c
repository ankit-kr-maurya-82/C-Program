#include <stdio.h>
#include <string.h>
int main() {
    char names[5][50];
    char findName[50];
    int found = 0;
    printf("Enter 5 names:\n");
    for(int i=0; i<5; i++)
        scanf("%s", names[i]);
    printf("Enter a name to search: ");
    scanf("%s", findName);
    for(int i=0; i<5; i++)
        if(strcmp(names[i], findName)==0){
            found = 1;
            break;
        }
    if(found)
        printf("Name FOUND in the array.\n");
    else
        printf("Name NOT FOUND in the array.\n");
    return 0;
}
