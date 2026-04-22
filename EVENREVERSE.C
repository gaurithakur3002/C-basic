#include <stdio.h>
int main() {
    int i = 20;
    while(i >= 2) {
        if(i % 2 == 0)
            printf("%d ", i);
        i--;
    }
    return 0;
}
