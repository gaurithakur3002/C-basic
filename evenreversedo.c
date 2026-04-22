#include <stdio.h>
int main() {
    int i = 20;
    do {
        if(i % 2 == 0)
            printf("%d ", i);
        i--;
    } while(i >= 2);
    return 0;
}
