#include<stdio.h>
int main(){
    int n;
    printf("Enter the size");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("enter the number which you want to find");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            printf("Found");
        }
    }
}