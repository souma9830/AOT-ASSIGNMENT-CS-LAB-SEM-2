#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the Row and Column Number of the Matrix: ");
    scanf("%d %d", &m, &n);

    int arr[m][n], brr[m][n], res[m][n];
    printf("Please input the First Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);  
        }
    }

    printf("Please input the Second Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &brr[i][j]); 
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = arr[i][j] + brr[i][j];  
        }
    }


    printf("After adding, the resulting matrix is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
}
