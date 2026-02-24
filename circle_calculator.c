#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    double radius = 0.0f;
    double area = 0.0f;
    double surfaceArea = 0.0f;
    const double PI = 3.14159;
    double volume = 0.0f;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("Area: %.2lf\n", area);
    printf("Surface Area: %.2lf\n", surfaceArea);
    printf("Volume: %.2lf\n", volume);

    return 0;
}