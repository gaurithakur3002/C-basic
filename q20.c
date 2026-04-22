//Q20. Check whether a given character is an alphabet, digit, or special character.

#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) printf("Alphabet");
    else if(c >= '0' && c <= '9') printf("Digit");
    else printf("Special Character");
    return 0;
}