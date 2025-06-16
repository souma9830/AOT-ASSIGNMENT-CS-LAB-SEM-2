#include<Stdio.h>
void swap(int *a, int *b){
    int temp;
    temp= *a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    printf("Enter the two num");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("After swap the vlaue is %d and %d",a,b);
}