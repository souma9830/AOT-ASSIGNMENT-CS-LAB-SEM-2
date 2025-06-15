//    1
//   23
//  456
// 78910
#include<stdio.h>
int main(){
    int n;
    printf("Enter the row number");
    scanf("%d",&n);
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n-1;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",num);
            num++; 
        }
        printf("\n");
    }
}