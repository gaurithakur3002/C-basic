//Q31. Calculate the sum of n natural numbers using a for loop.

#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) sum += i;
    printf("Sum = %d", sum);
    return 0;
}