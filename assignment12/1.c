#include <stdio.h>

int main(){
     FILE * ptr;
   
      ptr = fopen("file.txt", "w");
      if(ptr == NULL){
        printf("Error: File not found\n");
        return 1;
      }
      fprintf(ptr, "This is written text\n");
      fprintf(ptr, "This is another line\n");
      
      fclose(ptr);
      return 0;
}