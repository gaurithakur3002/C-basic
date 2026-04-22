//Q12. Write a program to find the greatest number (three numbers).

#include <stdio.h>
int main() {
    int a, b, c, g;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    g = a;
    if(b > g) g = b;
    if(c > g) g = c;
    printf("Greatest = %d", g);
    return 0;
}