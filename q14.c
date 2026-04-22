//Q14. Income tax calculation as per slabs (no tax below 2.5L).

#include <stdio.h>
int main() {
    double income, tax = 0.0;
    printf("Enter annual income (in rupees): ");
    scanf("%lf", &income);
    if(income > 250000) {
        if(income <= 500000) tax += (income - 250000) * 0.05;
        else {
            tax += (500000 - 250000) * 0.05;
            if(income <= 1000000) tax += (income - 500000) * 0.20;
            else {
                tax += (1000000 - 500000) * 0.20;
                tax += (income - 1000000) * 0.30;
            }
        }
    }
    printf("Tax = %.2f", tax);
    return 0;
}