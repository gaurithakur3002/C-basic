//Q22. Menu-driven program to calculate area of Circle, Rectangle, Triangle.

#include <stdio.h>
int main() {
    int ch;
    printf("1:Circle 2:Rectangle 3:Triangle\nEnter choice: ");
    scanf("%d", &ch);
    if(ch == 1) {
        double r;
        printf("Enter radius: ");
        scanf("%lf", &r);
        printf("Area = %.2lf", 3.141592653589793 * r * r);
    } else if(ch == 2) {
        double l, w;
        printf("Enter length and width: ");
        scanf("%lf %lf", &l, &w);
        printf("Area = %.2lf", l * w);
    } else if(ch == 3) {
        double b, h;
        printf("Enter base and height: ");
        scanf("%lf %lf", &b, &h);
        printf("Area = %.2lf", 0.5 * b * h);
    } else printf("Invalid choice");
    return 0;
}