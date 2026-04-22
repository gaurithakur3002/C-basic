#include <stdio.h>
int main() {
    char name[50];
    int age;
    float height;
    printf("Enter name age height: ");
    scanf("%49s %d %f", name, &age, &height);
    printf("Name: %s\nAge: %d\nHeight: %.2f", name, age, height);
    return 0;
}
