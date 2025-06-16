#include<stdio.h>
int main(){
    FILE *ptr=fopen("exam.txt","r");
    char str[100];
    int vowelCount=0;
    while(fgets(str,100,ptr)!=NULL){
        printf("%s",str);
        for(int i=0;str[i]!='\0';i++){
            char ch=str[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowelCount++;
        }
    }
    }
    printf("The number of vowel %d",vowelCount);

    }

