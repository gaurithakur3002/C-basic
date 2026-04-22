//Q6. Write a program for Pre & Post Increment & Decrement.

#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Value now: %d\n", a);
    printf("Pre-increment: %d\n", ++a);
    printf("Post-increment: %d\n", a++);
    printf("After post-inc value: %d\n", a);
    printf("Pre-decrement: %d\n", --a);
    printf("Post-decrement: %d\n", a--);
    printf("After post-dec value: %d\n", a);
    return 0;
}