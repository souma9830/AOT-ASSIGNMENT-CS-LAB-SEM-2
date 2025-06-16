#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);

    switch ((n > 0) - (n < 0)) {
        case 1:
            printf("The number is Positive.\n");
            break;
        case 0:
            printf("The number is Zero.\n");
            break;
        case -1:
            printf("The number is Negative.\n");
            break;
        default:
            printf("Unexpected case.\n");
    }

    return 0;
}
