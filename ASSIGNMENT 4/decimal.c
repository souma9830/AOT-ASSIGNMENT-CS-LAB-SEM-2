#include<Stdio.h>
int main(){
    int decimal;
    printf("Enter a decimal no like (eg. 16):");
    scanf("%d",&decimal);
     int binary[32],count=0;
     if(decimal==0) 
     {
          printf("Binary = 0");
     
     }
   while(decimal>0){
        binary[count]=decimal%2;
        decimal/=2;
          count++;
   }
   printf("\n");
   for(int j=count-1;j>=0;j--){
     
     printf("%d",binary[j]);
   }
   
}