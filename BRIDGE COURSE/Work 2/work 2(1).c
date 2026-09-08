 #include <stdio.h>

void main() {
    char a;

    printf("Enter a vowel : ");
    scanf("%c", &a);

    switch (a)
 {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", a);
            break;

        default:
            printf("%c is not a vowel.\n", a);
    }
}
