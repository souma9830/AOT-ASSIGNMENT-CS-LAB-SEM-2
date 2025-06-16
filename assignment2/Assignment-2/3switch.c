#include <stdio.h>

int main(){
    int n,x,y;
    printf("enter value of x :\n");
    scanf("%d",&x);
    printf("Enter value of n : \n");
    scanf("%d",&n);

    switch(n){
        case 1: y=1+(x*x);
        printf("The value of y is : %d",y);
        break;
        case 2: y = 1+(x/n);
        printf("The value of y is : %d",y);
        break;
        case 3: y= 1+(2*x);
        printf("The value of y is : %d",y);
        break;
        default: y= 1+ (n*x);
        printf("The value of y is : %d",y);
    }
    return 0;
}
   