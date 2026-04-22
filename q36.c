//Q36. Print even numbers in reverse order from 20 to 2 using a while loop.

#include <stdio.h>
int main() {
    int i = 20;
    while(i >= 2) {
        printf("%d ", i);
        i -= 2;
    }
    return 0;
}