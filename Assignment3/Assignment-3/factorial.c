#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int fact=1;
    for(int i=n;i>0;i--){
        fact=fact*i;
    }
    printf("The factorial of tht number is %d",fact);
}