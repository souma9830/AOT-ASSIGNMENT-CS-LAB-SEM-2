#include<stdio.h>
void addmatrix(int arr[10][10], int brr[10][10], int res[10][10], int row, int c){
    for(int i=0;i<row;i++){
        for(int j=0;j<c;j++){
            res[i][j]=arr[i][j]+brr[i][j];
        }
      
    }
}
void display(int res[10][10], int row, int c)
{
    for(int i=0;i<row;i++){
        for(int j=0;j<c;j++){
            printf("%d",res[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int r,c;
    printf("Enter the row and colum number ");
    scanf("%d%d",&r,&c);
    int arr[r][c],brr[r][c],res[r][c];
    printf("Enter the first matrix");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the second matrix");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    
   addmatrix(arr,brr,res,r,c);
   display(res,r,c);
}