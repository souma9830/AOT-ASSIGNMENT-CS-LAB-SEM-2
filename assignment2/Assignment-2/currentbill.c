#include<stdio.h>
int main(){
    int unit;
    float bill;
    printf("Enter The unit");
    scanf("%d",&unit);
    if(unit<=200){
        bill=unit*0.50;
        printf("The bill is %f",bill);
    }
    else if(unit<=400){
        bill=100+(unit-200)*0.65;
          printf("The bill is %f",bill);
    }
    else if(unit<=600){
        bill=250+(unit-400)*0.8;
          printf("The bill is %f",bill);
    }
    else{
        bill=425+(unit-600)*1.25;
          printf("The bill is %f",bill);
    }
}