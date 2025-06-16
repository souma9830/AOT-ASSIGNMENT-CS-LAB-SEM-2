#include <stdio.h>
int main() {
    FILE *fp = fopen("data.txt", "w");
if (fp != NULL) {
    fputs("Hello, world!\n", fp);
    fclose(fp);
}
}

