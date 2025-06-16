#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    printf("Enter the string");
    gets(str1);
    int i=0,j;
    j=strlen(str1)-1;
    char str2[100];
    while(i<j){
        char temp;
        temp=str1[i];
        str1[i]=str1[j];
        str1[j]=temp;
        i++;
        j--;
    }
printf("The reverse string is ");
puts(str1);
}