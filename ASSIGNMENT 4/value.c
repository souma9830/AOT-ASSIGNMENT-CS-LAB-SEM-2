//y=1+(1/2)+(1/3)+......+(1/n)
#include<stdio.h>
int main(){
    float n;
    printf("Enter the term which you want to the sum");
    scanf("%f",&n);
    float sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+(1.0/i); 
    }
    printf("The sum is %f",sum);
}