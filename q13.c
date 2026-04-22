//Q13. Electricity bill with slabs and 20% surcharge.

#include <stdio.h>
int main() {
    int units;
    double bill = 0.0;
    printf("Enter units consumed: ");
    scanf("%d", &units);
    if(units <= 100) bill = units * 1.5;
    else if(units <= 200) bill = 100 * 1.5 + (units - 100) * 2.0;
    else bill = 100 * 1.5 + 100 * 2.0 + (units - 200) * 3.0;
    bill = bill + bill * 0.20;
    printf("Final bill = %.2f", bill);
    return 0;
}