//Q16. Determine whether a character entered is lowercase or uppercase.

#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    if(c >= 'a' && c <= 'z') printf("Lowercase");
    else if(c >= 'A' && c <= 'Z') printf("Uppercase");
    else printf("Not an alphabet");
    return 0;
}