#include <stdio.h>

void main() {
    float principal, rate, time, interest;

    // Input principal amount
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    // Input rate
    printf("Enter annual interest rate: ");
    scanf("%f", &rate);

    // Input time
    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    interest = (principal * rate * time) / 100;

    // Display the calculated interest
    printf("Simple Interest = %.2f\n", interest);
}