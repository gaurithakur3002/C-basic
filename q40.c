//Q40. Print even numbers in reverse order from 20 to 2 using a do-while loop.

#include <stdio.h>
int main() {
    int i = 20;
    do {
        printf("%d ", i);
        i -= 2;
    } while(i >= 2);
    return 0;
}