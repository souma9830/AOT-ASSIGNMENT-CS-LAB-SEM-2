// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
#include<stdio.h>
int main(){
    int n;
    printf("Enter the Row Number");
    scanf("%d",&n);
    int res=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",res);
            res++;
        }
        printf("\n");
    }
}