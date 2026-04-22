//Q11. Write a program to input grades of students.

#include <stdio.h>
int main() {
    int n, i;
    printf("How many students? ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        char grade[3];
        printf("Enter grade of student %d: ", i);
        scanf("%2s", grade);
        printf("Student %d grade: %s\n", i, grade);
    }
    return 0;
}