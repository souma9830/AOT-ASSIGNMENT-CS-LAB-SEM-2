#include<Stdio.h>
#include<string.h>
int main(){
    char str[200],alp=0,digit=0,special=0,i=0;
    printf("Enter the string");
    gets(str);
    while(str[i]!='\0'){
        if(str[i]>='0' && str[i]<='9'){
            digit++;
        }
        else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
            alp++;
        }
        else{
            special++;
        }
        i++;

    }
    printf("ALphabet=%d and digit=%d and special=%d ",alp,digit,special);
}