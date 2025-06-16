#include<Stdio.h>
int main(){
    FILE *first=fopen("souma.txt","r");
    FILE *sec=fopen("copy.txt","w");
    char str[100];
    while(fgets(str,100,first)!=NULL){
        fputs(str,sec);
        printf("%s",str);
    }
}