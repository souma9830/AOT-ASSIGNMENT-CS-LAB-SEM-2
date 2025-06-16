#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   if(argc != 2){
      printf("Error: Invalid number of arguments\n");
      return 1;
   }

   int num = atoi(argv[1]);
   
   int fact =1;
   for(int i = 1; i <= num; i++){
      fact *= i;
   }
   printf("Factorial of %d is %d\n", num, fact);
   
   return 0;
}