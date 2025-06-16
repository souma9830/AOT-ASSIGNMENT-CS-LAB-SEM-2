// Write a C program to copy one array to another using pointers
#include<stdio.h>
int main(){
    int arr[100],brr[100];
    int *a,*b;
    int n;
    printf("Enter the number of elemnt");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    a=arr;
    b=brr;
    for(int i=0;i<n;i++){
        *(b+i)=*(a+i);
    }
     printf("Elements in the target array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ",b[i]);
    }
}