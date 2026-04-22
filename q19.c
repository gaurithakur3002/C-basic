//Q19. Check whether a given number is divisible by both 5 and 11 or not.

#include <stdio.h>
int main() {
    int n;
    printf("Enter integer: ");
    scanf("%d", &n);
    if(n % 5 == 0 && n % 11 == 0) printf("Divisible by 5 and 11");
    else printf("Not divisible by both");
    return 0;
}