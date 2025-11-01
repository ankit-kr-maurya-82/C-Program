#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int choice;
    char filename[50];

    while (1) {
        printf("\n********** MENU **********\n");
        printf("1. Open File\n");
        printf("2. Save File\n");
        printf("3. Close File\n");
        printf("4. Exit\n");
        printf("**************************\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: // Open File
                printf("Enter filename to open: ");
                scanf("%s", filename);
                fp = fopen(filename, "r");  // open file in read mode
                if (fp == NULL) {
                    printf("Error: File not found!\n");
                } else {
                    printf("File '%s' opened successfully.\n", filename);
                }
                break;

            case 2: // Save File
                printf("Enter filename to save: ");
                scanf("%s", filename);
                fp = fopen(filename, "w");  // open file in write mode (creates new file)
                if (fp == NULL) {
                    printf("Error: Could not save file!\n");
                } else {
                    printf("File '%s' saved successfully.\n", filename);
                    fclose(fp); // close after saving
                }
                break;

            case 3: // Close File
                if (fp != NULL) {
                    fclose(fp);
                    fp = NULL;
                    printf("File closed successfully.\n");
                } else {
                    printf("No file is currently open.\n");
                }
                break;

            case 4: // Exit
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
