#include<Stdio.h>
int main(){
    int n,remainder,orgnum;
    printf("Enter the Number");
    scanf("%d",&n);
    int digit=0;
    orgnum=n;
    int res=0;
    while(orgnum!=0){
      remainder=orgnum%10;
        res=res*10+remainder;
        orgnum/=10;
    }
    if(res==n){
        printf("The number is palindrom");
    }
    else{
        printf("The number is not palindrome");
    }
}