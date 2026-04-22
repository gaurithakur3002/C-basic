//Q9. Write a program to check whether the input number is odd and even.

#include <stdio.h>
int main() {
    int n;
    printf("Enter integer: ");
    scanf("%d", &n);
    if(n % 2 == 0) printf("Even");
    else printf("Odd");
    return 0;
}