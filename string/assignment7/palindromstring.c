#include<stdio.h>
#include<string.h>
int main(){
    char str1[200];
    printf("Enter the string");
    gets(str1);
    int i=0,j;
    char str2[200];
   strcpy(str2,str1);
    j=strlen(str1)-1;
    while(i<j){
        char temp;
        temp=str1[i];
        str1[i]=str1[j];
        str1[j]=temp;
        i++;
        j--;
    }
    puts(str1);
    puts(str2);
   if(strcmp(str1,str2)==0){
   	printf("The string is palindrom ");
   }
   else {
        printf("The string is not a palindrome.\n");
    }
}