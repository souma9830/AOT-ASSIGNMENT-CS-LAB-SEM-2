#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<= n - i;j++){
            printf("  ");
        }
        int num=i;
        for(int k=1;k<=i;k++){
            printf("%d ",num++);
        }
        num-=2;
        for(int k=1;k<i;k++){
            printf("%d ",num--);
        }
        printf("\n");
    }
}