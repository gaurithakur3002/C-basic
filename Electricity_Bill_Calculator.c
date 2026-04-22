#include <stdio.h>

int main() {
    float units, bill = 0, surcharge, total;

    printf("Enter total units consumed: ");
    scanf("%f", &units);

    if(units <= 100) {
        bill = units * 1.5;
    } else if(units <= 200) {
        bill = 100 * 1.5 + (units - 100) * 2.0;
    } else {
        bill = 100 * 1.5 + 100 * 2.0 + (units - 200) * 3.0;
    }

    surcharge = 0.2 * bill;
    total = bill + surcharge;

    printf("Electricity Bill (with 20%% surcharge): Rs. %.2f\n", total);

    return 0;
}
