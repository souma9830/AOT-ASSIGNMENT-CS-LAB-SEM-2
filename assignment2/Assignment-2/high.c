#include <stdio.h>

int main() {
    int a, b, diff;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (a > b) {
        case 1:
            printf("Maximum is: %d\n", a);
            break;
        case 0:
            printf("Maximum is: %d\n", b);
            break;
    }

    return 0;
}
