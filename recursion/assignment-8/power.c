#include<stdio.h>
#include<math.h>
int poweer(int a, int b){
    if(b==0) return 1;
    return a*pow(a,b-1);
}

int main(){
    int a,b;
    printf("Enter the value of base and exponent");
    scanf("%d%d",&a,&b);
    int res=poweer(a,b);
    printf("THe result is %d",res);

}