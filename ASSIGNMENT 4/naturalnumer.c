#include<Stdio.h>
int main(){
    int term;
    printf("Enter the Term you want to print");
    scanf("%d",&term);
    for(int i=1;i<=term;i++){
        printf("%d ",i);
    }
}