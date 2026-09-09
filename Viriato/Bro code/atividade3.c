#include <stdio.h>
#include <math.h>

int main() {
    double principal = 0.0, rate =0.0, total = 0.0;
    int years = 0, times_compounded = 0;

    printf("Compound Interest Calculator\n");

    printf("enter the principal (P): ");
    scanf("%lf", &principal);

    printf("enter the interest rate in %% (r): ");
    scanf("%lf", &rate);
    rate = rate/100;

    printf("Enter the # of years (t): ");
    scanf("%d", &years);

    printf("Enter the # of times compounded per year (n): ");
    scanf("%d", &times_compounded);

    total = principal * pow(1 + rate / times_compounded, times_compounded * years);

    printf("after the %d years, the total will be: $%.2lf", years, total);

    return 0;
}
