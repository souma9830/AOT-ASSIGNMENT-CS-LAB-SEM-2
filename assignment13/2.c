#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
   if(argc != 4){
      printf("Error: Invalid number of arguments\n");
      return 1;
   }

   int num1 = atoi(argv[1]);
   int num2 = atoi(argv[2]);
   int num3 = atoi(argv[3]);

   if(num1 > num2 && num1 > num3){
      printf("The largest number is : %d\n", num1);
   }
   else if(num2 > num1 && num2 > num3){
      printf("The largest number is : %d\n", num2);
   }
   else{
      printf("The largest number is : %d\n", num3);
   }
   return 0;
}