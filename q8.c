//Q8. Write a program to convert centigrade degrees temp to Fahrenheit.

#include <stdio.h>
int main() {
    float c, f;
    printf("Enter Celsius: ");
    scanf("%f", &c);
    f = (c * 9.0f / 5.0f) + 32.0f;
    printf("Fahrenheit = %.2f", f);
    return 0;
}