#include <stdio.h>

int main() {
    int num, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    rem = num % 2;

    switch (rem) {
        case 0:
            printf("The number is Even.\n");
            break;
        case 1:
        case -1:  
            printf("The number is Odd.\n");
            break;
        default:
            printf("Unexpected case.\n");
    }

    return 0;
}
