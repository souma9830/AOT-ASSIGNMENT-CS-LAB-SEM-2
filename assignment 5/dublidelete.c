#include<stdio.h>
int main(){
    int n;
    printf("Enter the aray size");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The Array is ");
      for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int dublicate;
    int pos;
        
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                printf("%d ",arr[i]);
                dublicate=arr[i];
                pos=i;
            }
        }
    }
    printf("\nThe dublicate element is %d\n",dublicate);
    for(int i=pos;i<n-1;i++){
        arr[pos]=arr[i-1];
    }
      for(int i=0;i<n-1;i++){
            printf("%d ",arr[i]);
         } 



}