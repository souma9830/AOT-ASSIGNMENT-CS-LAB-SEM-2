#include<Stdio.h>
int main(){
    int n;
    printf("ehich Table You want");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d*%d=%d\n",n,i,n*i);
    }
}