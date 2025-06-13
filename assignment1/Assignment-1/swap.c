#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the two number");
    scanf("%d%d",&a,&b);
    printf("Before swap the value is %d and %d",a,b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swap the value is %d and %d",a,b);
    
}