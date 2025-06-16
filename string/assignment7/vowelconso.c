#include<Stdio.h>
int main(){
    int str[100];
    printf("enter your string");
    gets(str);
    int i=0;
    int vowel=0,conso=0;
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            vowel++;
        }
        else{
            conso++;
        }
        i++;
    }
    printf("Number of Vowel are and consonant are %d and %d",vowel,conso);
}