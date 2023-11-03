#include<stdio.h>
#include<math.h>

int main() {
    double radius, area;
    const double pi = 3.14; 

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = pi * pow(radius, 2);

    printf("The area of the circle with radius %.2lf is %.2lf\n", radius, area);

    return 0;
}