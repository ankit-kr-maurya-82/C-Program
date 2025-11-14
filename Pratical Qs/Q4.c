#include <stdio.h>
#include <string.h>
int main() {
    char city[5][50] = {"Kota", "Jaipur",
        "Bharatpur", "Delhi", "Lucknow"};
        char temp[50];
        for(int i=0; i<5-1; i++){
            for (int j=i+1; j<5; j++){
                if(strcmp(city[i],city[j])>0){  
                    strcpy(temp,city[i]);
                    strcpy(city[i],city[j]);
                    strcpy(city[j],temp);
                }
            }
        }
        for(int i=0; i<5; i++)
        printf("%s\n",city[i]);
        return 0;
    }


    
// 4. store 5 city names in a string array and sort them in alphabetical order