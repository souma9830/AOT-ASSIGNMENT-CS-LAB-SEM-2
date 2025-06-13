#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two number");
    scanf("%d%d",&a,&b);
    printf("Before swap the value is %d and %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap the value is %d and %d",a,b);
    
}