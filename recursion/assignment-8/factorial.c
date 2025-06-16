#include<stdio.h>
int fact(int a ){
    if(a==0 ||a==1) return 1;
    return a*fact(a-1);
}
int factorial(int a,int r){
        return fact(a)/(fact(r)*fact(a-r));
}
int main(){
    int n,r;
    printf("Enter the Number");
    scanf("%d%d",&n,&r);
    int res=fact(n);
    printf("The factorial of this numbe is %d",res);
    int ncr=factorial(n,r);
     printf("\nThe factorial of this numbe is %d",ncr);

}