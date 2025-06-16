#include<Stdio.h>
#include<string.h>
int main(){
    char str1[100];
    printf("Enter the String");
    gets(str1);
    int len=0;
    while(str1[len]!='\0'){
        len++;
    }
    printf("The Lenghth of the string is %d",len);
}