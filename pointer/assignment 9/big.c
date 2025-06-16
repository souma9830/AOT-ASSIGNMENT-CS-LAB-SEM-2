#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two number");
    scanf("%d%d",&a,&b);
    int *p1,*p2;
    p1=&a;
    p2=&b;
   if (*p1 > *p2) {
        printf("The bigger number is: %d\n", *p1);
    } else if (*p2 > *p1) {
        printf("The bigger number is: %d\n", *p2);
    } else {
        printf("Both numbers are equal: %d\n", *p1);
    }

}