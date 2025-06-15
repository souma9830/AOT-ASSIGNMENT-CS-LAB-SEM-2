#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int N=n;
    int ld=0;
    int count=0;
    while(n!=0){
        n/=10;
        count++;
    }

    int arr[count];
    int i=count-1;
    while(N){
        ld=N%10;
        arr[i]=ld;
        N/=10;
        i--;
    }

    int temp=arr[0];
    arr[0]=arr[count-1];
    arr[count-1]=temp;

    int res=0;
    for(int i=0;i<count;i++){
        res=(res*10)+arr[i];
    }
    printf("%d",res);
    return 0;

}