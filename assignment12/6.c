#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 

int main() {
    FILE *fp;
    int num;
    int max = INT_MIN;
    int min = INT_MAX;
    int found = 0;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        if (num > max) max = num;
        if (num < min) min = num;
        found = 1;
    }

    fclose(fp);

    if (!found) {
        printf("No integers found in the file.\n");
    } else {
        printf("Smallest integer: %d\n", min);
        printf("Largest integer: %d\n", max);
    }

    return 0;
}
