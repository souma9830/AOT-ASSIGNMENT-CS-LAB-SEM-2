#include<stdio.h>
int main(){
     int n;
    printf("Enter the size");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n-1;i++){
        int mindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mindex])
            {
                mindex=j;
            }
        }
        if(mindex!=i){
            int temp;
            temp=arr[i];
            arr[i]=arr[mindex];
            arr[mindex]=temp;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}