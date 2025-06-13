#include <stdio.h>

int main() {
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
    for(int i=0;i<m;i++){
        int rowsum=0;
        for(int j=0;j<n;j++){
            rowsum+=arr[i][j];
        }
        printf("Sum of the %d rowsums is %d\n",i+1,rowsum);
    }
    for(int j=0;j<n;j++){
        int colsum=0;
        for(int i=0;i<m;i++){
            colsum+=arr[i][j];
        }
        printf("Sum of the %d colsums is %d\n",j+1,colsum);
    }

    return 0;
}
