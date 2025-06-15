#include<Stdio.h>
int main(){
    int term;
    printf("Enter the term you eant to" );
    scanf("%d",&term);
    int sumodd=0,sumeven=0;
    printf("All even NUmber upto this term\n");
    for(int i=1;i<=term;i++){
        if(i%2==0){
            printf("%d\n",i);
            sumeven+=i;
        }
    }
    printf("All Odd NUmber upto this term\n");
    for(int i=0;i<=term;i++){
        if(i%2!=0){
            printf("%d\n",i);
            sumodd+=i;
        }
    }
    printf("The sum of the odd number %d",sumodd);
    printf("The sum of the even number is %d",sumeven);
}