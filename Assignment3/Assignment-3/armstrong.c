#include<stdio.h>
int main(){
    int num,orgno,remainder,res=0;
    printf("enter the number");
    scanf("%d",&num);
    orgno=num;
    while(orgno!=0){
        remainder=orgno%10;
        res+=remainder*remainder*remainder;
        orgno/=10;
    }
    if(res==num){
        printf("The number is armstrong number");
    }
    else{
        printf("THe number is not a armstrong");
    }
}