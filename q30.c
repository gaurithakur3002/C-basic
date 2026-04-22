//Q30. Find the factorial of a number.

#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) fact *= i;
    printf("Factorial = %llu", fact);
    return 0;
}