#include <stdio.h>
#include <string.h>
int main() {
    // 3. Input 3 strings and display the number of vowels in each string.
    char str[3][50] = {"Ankit", "Bhrantik", "Akshat"};
    int count=0;
    for (int i=0; i<3; i++) {
        // count = 0;
        for (int j=0; j<strlen(str[i]); j++) {
            char ch = str[i][j];
            if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U') {
                count++;
            }
        }
        printf(" %s = %d\n", str[i], count);
    }

    return 0;
}
