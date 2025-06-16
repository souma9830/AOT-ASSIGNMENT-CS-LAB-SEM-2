#include<Stdio.h>
int main(){
    FILE *ptr=fopen("souma.txt","w");
    char str[]="soumadeeep shee \n i am a student";
    fputs(str,ptr);
    fclose(ptr);
    ptr=fopen("souma.txt","r");
    while(fgets(str,100,ptr)!=NULL){
        printf("%s",str);
    }
}