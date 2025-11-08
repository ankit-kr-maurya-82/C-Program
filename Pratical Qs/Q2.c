#include<stdio.h>
#include<string.h>


int main(){
    // 2. Store 5 names in a string array and print the longest name among them.

    char st_name[5][100]= {"Ankit", "Bhrantik", "Akshat", "Shakib", "Chitra"};
    int len =0;
    int maxind=0;

    for(int i=0; i<5; i++){
        if(strlen(st_name[i])> strlen(st_name[maxind])){
            maxind = i;
        }
    }
    printf("student name longest is: %s\n",st_name[maxind]);

    return 0;

}
