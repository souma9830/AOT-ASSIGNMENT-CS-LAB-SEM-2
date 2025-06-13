#include<stdio.h>
int main(){
    int term;
    int a=0,b=1;
    int total; 
    printf("Enter the Term");
    scanf("%d",&term);
    for(int i=0;i<term;i++){
        printf("%d ",a);
        total=a+b;
        a=b;
        b=total;
    }
    printf("\n");
}