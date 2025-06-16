#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    printf("Enter the first string ");
    gets(str1);
    printf("enter the second string");
    gets(str2);
    char str3[200];
    strcpy(str3,str1);
    strcat(str3,str2);
    puts(str3);
}