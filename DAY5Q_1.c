#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;
    float simpleAmount, compoundAmount;

    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter time: ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;
    simpleAmount = principal + simpleInterest;

    compoundAmount = principal * pow((1 + rate / 100), time);
    compoundInterest = compoundAmount - principal;

    printf("\nSimple Interest = %.2f", simpleInterest);
    printf("\nSimple Amount = %.2f", simpleAmount);

    printf("\nCompound Interest = %.2f", compoundInterest);
    printf("\nCompound Amount = %.2f\n", compoundAmount);

    return 0;
}