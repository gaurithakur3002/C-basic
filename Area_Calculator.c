#include <stdio.h>
#define PI 3.14159

int main() {
    int choice;
    float radius, length, breadth, base, height;

    printf("Menu:\n");
    printf("1. Area of Circle\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &radius);
            printf("Area of Circle = %.2f\n", PI * radius * radius);
            break;
        case 2:
            printf("Enter length and breadth: ");
            scanf("%f %f", &length, &breadth);
            printf("Area of Rectangle = %.2f\n", length * breadth);
            break;
        case 3:
            printf("Enter base and height: ");
            scanf("%f %f", &base, &height);
            printf("Area of Triangle = %.2f\n", 0.5 * base * height);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
