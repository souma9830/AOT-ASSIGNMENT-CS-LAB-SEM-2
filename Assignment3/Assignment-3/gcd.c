#include<stdio.h>
int gcd(int a,int b){
   while(b!=0){
    int temp;
    temp=b;
    b=a%b;
    a=temp;
   }
    return a;
}
int main(){
    int a,b;
    printf("Enter the two number");
    scanf("%d %d",&a,&b);
    int res=gcd(a,b);
    printf("The GCD of the two number is %d",res);
    int lcm = (a*b) / res;
    printf("\nLcm is:%d",lcm);
}