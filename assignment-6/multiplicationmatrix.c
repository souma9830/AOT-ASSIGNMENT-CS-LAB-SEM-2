#include <stdio.h>

int main() {
    int m, n,p,q;
    printf("Enter the Row and Column Number of the 1st Matrix: ");
    scanf("%d %d", &m, &n);

    int arr[m][n], brr[p][q], res[m][q];
    printf("Please input the First Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);  
        }
    }
     printf("Enter the Row and Column Number of the 2nd Matrix: ");
    scanf("%d %d", &p, &q);
    printf("Please input the Second Matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &brr[i][j]); 
    }
    if (n != p) {
        printf("Matrix multiplication is not possible. Columns of first matrix must equal rows of second matrix.\n");
        return 0;
    }


   for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            res[i][j] = 0;
            for (int k = 0; k < n; k++) {
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }


    printf("After multiplication, the resulting matrix is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
}
