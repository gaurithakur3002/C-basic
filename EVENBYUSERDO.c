#include <stdio.h>
int main() {
    int start, end;
    printf("Enter start and end: ");
    scanf("%d %d", &start, &end);

    do {
        if(start % 2 == 0)
            printf("%d ", start);
        start++;
    } while(start <= end);

    return 0;
}
