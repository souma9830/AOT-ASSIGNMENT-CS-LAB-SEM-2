#include <stdio.h>

int main(){
     FILE * ptr;
     ptr = fopen("file.txt", "a");
     char ch[100];
     if(ptr == NULL){
        printf("Error: File not found\n");
        return 1;
     }
     fprintf(ptr, "\nThis is appended text");
     
     fclose(ptr);
     return 0;
}