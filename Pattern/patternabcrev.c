// DDDD
//  CCC
//   BB
//    A
#include<Stdio.h>
int main(){
    int r=4;
    for(int i=65+r-1;i>=65;i--){
        for(int j=65+r-1;j>i;j--){
            printf(" ");
        }
        char ch=i;
        for(int k=i;k>=65;k--){
            printf("%c",ch);
        }
        printf("\n");
    
    }
}