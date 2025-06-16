#include <stdio.h>

int main() {
    int n,a,b,res;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("Enter a: \n");
    scanf("%d",&a);
    printf("Enter b: \n");
    scanf("%d",&b);
    switch(n){
        case 1:
        res=a+b;
        printf("Result is - %d",res);
        break;
        case 2:
        res=a-b;
        printf("Result is - %d",res);
        break;
        default:
        printf("Invalid");
    }

    return 0;
}
