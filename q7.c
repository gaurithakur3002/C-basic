//Q7. Write a program showing common operators (arithmetic, relational, logical, bitwise).

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("Add: %d\n", a + b);
    printf("Sub: %d\n", a - b);
    printf("Mul: %d\n", a * b);
    if(b != 0) printf("Div: %d\n", a / b);
    printf("Mod: %d\n", a % b);
    printf("a>b: %d\n", a > b);
    printf("a==b: %d\n", a == b);
    printf("a&&b: %d\n", (a && b));
    printf("a|b (bitwise): %d\n", a | b);
    printf("a&b (bitwise): %d\n", a & b);
    return 0;
}