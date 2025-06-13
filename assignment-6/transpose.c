#include<stdio.h>
int main(){
     int m, n;
    printf("Enter the Row and Column Number of the Matrix: ");
    scanf("%d %d", &m, &n);

    int arr[m][n];
    printf("Please input the First Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);  
        }
    }
    printf("Before Transpose the matrix is \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);  
        }
        printf("\n");
    }
    printf("After transpose The matrix the matrix is \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }

}