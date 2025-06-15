#include<Stdio.h>
int perfect(int a){
    int sum=0;
    for(int i=1;i<a;i++){
        if(a%i==0){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    int term;
    printf("How Much Term till you need the perfect number");
    scanf("%d",&term);
    printf("THe perfect number are in this term");
    for(int i=1;i<=term;i++){
        if(i==perfect(i)){
            printf("%d ",i);
        }
    }
}