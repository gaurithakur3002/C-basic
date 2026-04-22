//Q33. Print even numbers from 1 to 20 using a while loop.

#include <stdio.h>
int main() {
    int i = 2;
    while(i <= 20) {
        printf("%d ", i);
        i += 2;
    }
    return 0;
}