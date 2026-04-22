//Q39. Print even numbers in a start-end range provided by user using a do-while loop.

#include <stdio.h>
int main() {
    int start, end, i;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);
    if(start % 2 != 0) i = start + 1; else i = start;
    if(i > end) return 0;
    do {
        printf("%d ", i);
        i += 2;
    } while(i <= end);
    return 0;
}