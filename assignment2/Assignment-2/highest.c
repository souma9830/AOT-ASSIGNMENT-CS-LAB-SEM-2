#include <stdio.h>
int main(){
    int a=4,b=6,c=1,max;
    max = (a>b)? ((a>c)?a:c) : ((b>c)?b:c);
    printf("Maximum is : %d\n",max);
}