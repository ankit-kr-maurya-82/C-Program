#include<stdio.h>
// struct Owner{
//     char firstName[30];
//     char lastName[30];
// };

struct Car{
    char brand[30];
    int year;
    // struct Owner owner;
};

void updateYear(struct Car *c){
    c->year = 2040;
}


int main() {
    struct Car car1 = {"Range Rover", 2025};
    updateYear(&car1);

    printf("Car: %s (%d)\n", car1.brand, car1.year);
return 0;
}