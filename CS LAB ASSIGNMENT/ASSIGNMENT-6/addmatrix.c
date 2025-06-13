#include<Stdio.h>
int main(){
    int m,n;
    printf("Enter the Row And coloum Number of the Matrix");
    scanf("%d%d",&m,&n);
    int arr[m][n],brr[m][n],res[m][n];
    printf("Please input The First Matrix");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
     printf("Please input The second Matrix");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&brr[i][j]);
        }
        printf("\n");
    }
    printf("After adding two matrix is ");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            res[i][j]=arr[i][j]+brr[i][j];
        }
        printf("\n");
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}