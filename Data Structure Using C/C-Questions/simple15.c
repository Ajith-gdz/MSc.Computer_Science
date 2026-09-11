#include <stdio.h>

int main() {
    int minutes, hours, rem;

    printf("Enter total minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;
    rem = minutes % 60;

    printf("Hours = %d\n", hours);
    printf("Minutes = %d\n", rem);

    return 0;
}
