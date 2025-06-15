#include<stdio.h>
int main(){
    int num,first,last,mul=1,res,orgnum,count;
    printf("Enter the Number");
    scanf("%d",&num);
     last=num%10;
    printf("THe last digit is %d",last);
    orgnum=num;
    while(num>=10){
        num/=10;
        mul*=10;
        count++;
    }
    first=num;
    int middle=(orgnum%mul)/10;
    int new= (last*mul)+middle*10+first;
    printf("THe NUmber is %d",new);
}