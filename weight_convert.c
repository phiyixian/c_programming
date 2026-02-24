#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    //WEIGHT CONVERTER PROGRAM
    
    printf("Weight Conversion Calculator\n");
    double weightinKg = 0.0f;
    double weightinPounds = 0.0f;

    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    
    int choice = 0;
    scanf("%d", &choice);

    if(choice == 1){
        printf("Enter weight in kilograms: ");
        scanf("%lf", &weightinKg);
        weightinPounds = weightinKg * 2.20462;
        printf("%.2lf kg is equal to %.2lf pounds\n", weightinKg, weightinPounds);
    } else if(choice == 2){
        printf("Enter weight in pounds: ");
        scanf("%lf", &weightinPounds);
        weightinKg = weightinPounds / 2.20462;
        printf("Weight in Pounds: %.2lf lbs is equal to %.2lf kg\n", weightinPounds, weightinKg);
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
        return 1; // Exit with an error code
    }
    return 0;
}