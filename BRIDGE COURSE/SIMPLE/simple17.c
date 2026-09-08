#include <stdio.h>

int main() {
    int age, rollNo, encoded, decoded;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your roll number: ");
    scanf("%d", &rollNo);

    // Encode
    encoded = age ^ rollNo;

    // Decode
    decoded = encoded ^ rollNo;

    printf("Encoded Age = %d\n", encoded);
    printf("Decoded Age = %d\n", decoded);

    return 0;
}	

