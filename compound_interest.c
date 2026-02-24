#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

    printf("Compound Interest Calculator\n");
    double principal = 0.0f;
    double rate = 0.0f;
    int years = 0;
    int compoundsPerYear = 0;
    double amount = 0.0f;

    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate % (r): ");
    scanf("%lf", &rate);

    printf("Enter the # of years (t): ");
    scanf("%d", &years);

    printf("Enter the # of times interest is compounded per year (n): ");
    scanf("%d", &compoundsPerYear);

    amount = principal * pow(1 + (rate / 100.0) / compoundsPerYear, years * compoundsPerYear);

    printf("After %d years, the amount is $%.2lf\n", years, amount);

    return 0;
}