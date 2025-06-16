#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   if(argc != 2){
      printf("Error: Invalid number of arguments\n");
      return 1;
   }

   int num = atoi(argv[1]);
   
      if(num %2 == 0){
         printf("Even ");
      }
      else{
         printf("Odd ");
      }
   
   return 0;
}