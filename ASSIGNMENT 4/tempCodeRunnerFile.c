#include<Stdio.h>
#include<math.h>
int armstrong(int num){
    int org=num;
    int count=0,remainder;
    while(num!=0){
        num/=10;
        count++;
    }
    int orgnum=org;
    int result=0;
    while(org!=0){
         remainder=org%10;
         result+=pow(remainder,count);
         org/=10;
    }
    return result;

}
int main(){
    int term;
    printf("Enter the term");
    scanf("%d",&term);
    printf("Form 1 to %d the armstrong number is",term);
    for(int i=1;i<=term;i++){
        if(i==armstrong(i)){
            printf("%d ",i);
        }
    }
}