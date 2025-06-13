#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,dis,real,img,root1,root2;
   printf("Enter the Discrimenent a,b,c");
   scanf("%d%d%d",&a,&b,&c);
      dis=(b*b-4*a*c);
      if(dis>0){
        root1= (-b+sqrt(dis))/2*a;
        root2=(-b-sqrt(dis))/2*a;
        printf("Rooots are real and different\n");
        printf("The roots are %d and %d\n",root1,root2);
      }
      else if(dis==0){
        root1=root2=-b/(2*a);
        printf("roots are real and equal");
      }
      else{
        printf("Roots are imaginary\n");
         real = -b / (2 * a);
        img = sqrt(-dis) / (2 * a);
        printf("Root1 = %d + %di\n", real, img);
        printf("Root2 = %d - %di\n", real, img);
      }

}