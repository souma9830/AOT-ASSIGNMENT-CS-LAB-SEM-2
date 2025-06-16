//add two mtrix using pointer
#include<stdio.h>
int main(){
    int a[10][10],b[10][10],r,c,res[10][10];
    printf("ENter the row and colum number respectively");
    scanf("%d%d",&r,&c);
    printf("ENter the first matrix");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",(*(a+i)+j));
        }
    }
     printf("ENter the Second matrix");
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",(*(b+i)+j));
        }
     }

     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            *(*(res+i)+j)= *(*(a+i)+j)+ *(*(b+i)+j);
        }
     }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",*(*(res+i)+j));
        }
        printf("\n");
     }
}
