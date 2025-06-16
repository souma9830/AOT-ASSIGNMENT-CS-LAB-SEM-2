// Write a C program to reverse an array using pointers.
#include<Stdio.h>
int main(){
    int arr[100],n,temp;
    printf("ENter the element of an array");
    scanf("%d",&n);
    int *start, *end;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    start=arr;
    end=arr+n-1;
    while(start<end){
        temp= *start;
        *start= *end;
        *end= temp;
        start++;
        end--;
    }
     printf("Reversed array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

}