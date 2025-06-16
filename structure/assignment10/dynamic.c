// C Program to Find Largest Number from an array. Array must be declared using Dynamic
// Memory Allocation

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr,n,max;
    printf("Enter the number of elemnts");
    scanf("%d",&n);
    arr= (int *)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("Inavalid array");
        return 0;
    }
    printf("Enter the array element");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The max element is %d",max);
}