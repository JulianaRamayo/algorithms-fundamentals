#include <stdio.h>

int main(){
    const double pi = 3.14169;
    double radius;
    double circumference;
    double area;

    printf("Enter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    printf("Circumference is equal to %lf \n", circumference);
    printf("Area is equal to %lf \n", area);

    return 0;
};