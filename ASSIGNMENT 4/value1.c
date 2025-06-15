#include<stdio.h>
#include<math.h>
int fact(int a){
    int res;
    if(a==0 || a==1) return 1;
        res=a*fact(a-1);
    return res;
}
int main(){
    int x;
    printf("Enter the value of x is ");
    scanf("%d",&x);
    int n;
    printf("How much Term You need");
    scanf("%d",&n);
    float sum=0;
    int power=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum+=pow(x,power)/fact(power);
        }
        else{
           sum-=pow(x,power)/fact(power);
        }
        power+=2;
    }
    printf("The summ is %f",sum);
}