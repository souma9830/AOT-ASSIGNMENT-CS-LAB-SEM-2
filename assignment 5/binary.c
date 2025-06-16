#include<stdio.h>
int main(){
     int n;
    printf("Enter the size");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int low=0,high=n-1,mid;
    int x;
    printf("Your find element");
    scanf("%d",&x);  
    while(low<=high){
         mid=(low+high)/2; 
         if(arr[mid]==x){
            printf("Present %d",x);
            return 0;
         }
         else if(arr[mid]<x){
            low=mid+1;
         }
         else{
            high=mid-1;
         }
    }
    
}