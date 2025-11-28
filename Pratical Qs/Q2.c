#include <stdio.h>
#include <string.h>
int main()
{

    char st_name[5][100] = { "harsh", "harsh", "dev", "shivansh"};

    int len = 0, maxint = 0;
    for (int i = 0; i < 5; i++){
        if (strlen(st_name[i])>=strlen(st_name[maxint]))
        maxint=i;
    }
    printf("%s",st_name[maxint]);
    // char st_name[5][100]= {"Ankit", "Bhrantik", 
    //     "Akshat", "Shakib", "Chitra"};
    // int len =0, maxind=0;
    // for(int i=0; i<5; i++)
    //     if(strlen(st_name[i])> strlen(st_name[maxind]))
    //         maxind = i;
    // printf("student name longest is: %s\n",st_name[maxind]);
    return 0;
}

// 2. Store 5 names in a string array and print the longest name among them.