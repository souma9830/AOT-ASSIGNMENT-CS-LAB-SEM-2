#include<Stdio.h>
int isprime(int term){
    if(term<2){
        return 0;
    }
    for(int i=2;i*i<=term;i++){
        if(term%i==0){
            return 0;
        }
     
    }
    return 1;
}
int main(){
    int term;
    printf("Enter the Term");
    scanf("%d",&term);
    for(int i=1;i<=term;i++){
        if(isprime(i)){
            printf("%d ",i);
        }
    }
}