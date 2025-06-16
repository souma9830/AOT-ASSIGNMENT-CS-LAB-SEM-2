#include<stdio.h>
int main(){
    int n;
    printf("The size of the array ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("The sum of the element in the array is %d",sum);
}