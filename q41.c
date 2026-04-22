//Q41. Calculate the sum of n natural numbers using a do-while loop.

#include <stdio.h>
int main() {
    int n, i = 1, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    if(n <= 0) { printf("Sum = 0"); return 0; }
    do {
        sum += i;
        i++;
    } while(i <= n);
    printf("Sum = %d", sum);
    return 0;
}