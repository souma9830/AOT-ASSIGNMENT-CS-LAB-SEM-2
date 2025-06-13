#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n%2==0){
        printf("The number is Even");
    }
    else{
        printf("The number is odd");
    }
}