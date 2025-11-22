#include<stdio.h>
#include<string.h>

void userDetail();

int main() {
    char nation[50];
    
    printf("Enter your nation: ");
    scanf("%s", &nation);

    if(strcmp(nation, "india") == 0 || strcmp(nation, "indian") == 0 || strcmp(nation, "in") == 0){
        userDetail();
    }
    else {
        printf("You are not valid for Aadhaar card!");
    }
    return 0;
}



void userDetail(){
    char fullName[50], fatherName[50], address[100], dob[20];

    printf("Enter your fullname: ");
    scanf("%s", fullName);

    printf("\nEnter your Father's Name: ");
    scanf("%s", fatherName);

    printf("\nEnter your address: ");
    scanf("%s", address);

    printf("\nEnter your DOB: ");
    scanf("%s", dob);

    printf("----------------------------------\n");
    printf("Name: %s\n", fullName);
    printf("Father's Name: %s\n", fatherName);
    printf("Address: %s\n", address);
    printf("DOB: %s\n", dob);
    printf("-----------------------------------\n");
    
}
