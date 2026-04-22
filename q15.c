//Q15. Write a program to find whether the entered year is a leap year.

#include <stdio.h>
int main() {
    int y;
    printf("Enter year: ");
    scanf("%d", &y);
    if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) printf("Leap Year");
    else printf("Not Leap Year");
    return 0;
}