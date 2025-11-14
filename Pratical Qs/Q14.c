#include<stdio.h>
int circle(float r, float *area, float *perimeter);
int main() {
    float radius, area, perimeter;
    printf("Enter radius: ");
    scanf("%f", &radius);
    circle(radius, &area, &perimeter);
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);
    return 0;
}
int circle(float r, float *area, float *perimeter){
    *area = 3.14*r*r;
    *perimeter= 2*3.14*r;
}


// 14.  Write a function that accepts the radius as a parameter and returns the area and perimeter.
