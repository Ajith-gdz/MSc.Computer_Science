#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5, total;
    float percentage;

    printf("Enter marks of five subjects: ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("Total = %d\n", total);
    printf("Percentage = %.2f\n", percentage);

    if (percentage >= 90)
        printf("Grade A+");
    else if (percentage >= 80)
        printf("Grade A");
    else if (percentage >= 70)
        printf("Grade B");
    else if (percentage >= 60)
        printf("Grade C");
    else if (percentage >= 50)
        printf("Grade D");
    else
        printf("Fail");

    return 0;
}

