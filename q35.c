//Q35. Print even numbers in a user-provided start and end range using a while loop.

#include <stdio.h>
int main() {
    int start, end, i;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);
    if(start % 2 != 0) i = start + 1; else i = start;
    while(i <= end) {
        printf("%d ", i);
        i += 2;
    }
    return 0;
}