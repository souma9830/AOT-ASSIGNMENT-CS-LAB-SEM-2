#include<stdio.h>
int fibonacci(int a){
    if(a==0) return 0;
    else if(a==1) return 1;
    else return fibonacci(a-1)+fibonacci(a-2);
}
int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}