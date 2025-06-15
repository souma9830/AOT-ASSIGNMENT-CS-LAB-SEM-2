//    *
//   ***
//  *****
// *******


#include<stdio.h>
int main(){
    int r=4;
     int str=1;
    for(int i=1;i<=r;i++){
        for(int j=i;j<=r-1;j++){
            printf(" ");
        }
       
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}