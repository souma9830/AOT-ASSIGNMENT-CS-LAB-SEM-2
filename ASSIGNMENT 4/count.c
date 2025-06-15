#include<Stdio.h>
int main(){
    int num;
    printf("Enter the Number");
    scanf("%d",&num);
    int org=num;
    int count=0;
    int sum=0,product=1;
    int digit;
    
    if(num==0){
        count=1;
        sum=0;
        product=0;
    }
    else{
        while(num!=0){
       digit= num%10;
        count++;
        sum+=digit;
        product*=digit;
        num/=10;
        
    }
    }
    printf("The digit present is %d\n",count);
    printf("The sum and prodcut is %d and %d",sum,product);
}