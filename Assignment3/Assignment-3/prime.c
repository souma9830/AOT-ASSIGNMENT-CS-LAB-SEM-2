#include<stdio.h>
int main(){
    int n;
    printf("ENter the number");
    scanf("%d",&n);
    if(n==1){
        printf("It is not a prime number");
    }
    int prime=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            printf("The number is not prime");
            prime=0;
            break;
        }
    }
    if(prime==1){
        printf("The number is a prime number");
    }

}