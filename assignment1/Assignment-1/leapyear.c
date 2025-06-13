#include<stdio.h>
int main(){
    int year;
    printf("Enter The year");
    scanf("%d",&year);
    if((year%4==0 && year%1!=0)||(year%400==0)){
        printf("The Year is leap Year");
    }
    else{
        printf("The year is not a leap year");
    }
}