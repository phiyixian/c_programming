#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    //TEMPERATURE CONVERSION PROGRAM

    double tempInCelsius = 0.0f;
    double tempInFahrenheit = 0.0f;

    printf("Temperature Conversion Calculator\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");

    printf("Is the temp in Celsius (C) or Fahrenheit (F)? ");
    char unit = '\0';
    scanf(" %c", &unit); // Read a single character input

    if(unit == 'C' || unit == 'c') {
        printf("Enter temperature in Celsius: ");
        scanf("%lf", &tempInCelsius);
        tempInFahrenheit = (tempInCelsius * 9.0 / 5.0) + 32.0;
        printf("%.2lf Celsius is equal to %.2lf Fahrenheit\n", tempInCelsius, tempInFahrenheit);
    } else if(unit == 'F' || unit == 'f') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%lf", &tempInFahrenheit);
        tempInCelsius = (tempInFahrenheit - 32.0) * 5.0 / 9.0;
        printf("%.2lf Fahrenheit is equal to %.2lf Celsius\n", tempInFahrenheit, tempInCelsius);
    } else {
        printf("Invalid input. Please enter 'C' for Celsius or 'F' for Fahrenheit.\n");
        return 1; // Exit with an error code
    }
    return 0;
}