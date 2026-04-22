//Q38. Print numbers from 1 to 20 using a do-while loop.

#include <stdio.h>
int main() {
    int i = 1;
    do {
        printf("%d ", i);
        i++;
    } while(i <= 20);
    return 0;
}