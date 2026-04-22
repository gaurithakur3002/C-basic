//Q23. Check whether an entered character is a vowel or a consonant using switch-case.

#include <stdio.h>
int main() {
    char c;
    printf("Enter a letter: ");
    scanf(" %c", &c);
    switch(c) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel"); break;
        default:
            if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) printf("Consonant");
            else printf("Not a letter");
    }
    return 0;
}