// A 
// B C
// C D E
// D E F G

#include<stdio.h>
int main(){
    int r=4;
   
    for(int i=65;i<r+65;i++){
        char ch=i;
        for(int j=65;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
       
    }
}