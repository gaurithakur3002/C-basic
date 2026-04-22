//Q17. Simple calculator using switch-case (add, sub, mul, div).

#include <stdio.h>
int main() {
    int choice;
    double x, y;
    printf("Choose 1:+ 2:- 3:* 4:/ : ");
    scanf("%d", &choice);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &x, &y);
    switch(choice) {
        case 1: printf("%.2lf", x + y); break;
        case 2: printf("%.2lf", x - y); break;
        case 3: printf("%.2lf", x * y); break;
        case 4: if(y != 0) printf("%.2lf", x / y); else printf("Division by zero"); break;
        default: printf("Invalid choice");
    }
    return 0;
}