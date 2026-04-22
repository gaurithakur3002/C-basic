//Q28. Print the multiplication table of a number using a for loop.

#include <stdio.h>
int main() {
    int n, i;
    printf("Enter number: ");
    scanf("%d", &n);
    for(i = 1; i <= 10; i++) printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}