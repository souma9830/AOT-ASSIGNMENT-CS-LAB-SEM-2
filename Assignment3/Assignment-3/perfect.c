#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(n==sum){
        printf("The number is perfect");
    }
    else{
        printf("The number is not perfect");
    }
}