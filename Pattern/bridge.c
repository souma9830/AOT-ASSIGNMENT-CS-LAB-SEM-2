// A                   A 
// A B               B A
// A B C           C B A
// A B C D       D C B A
// A B C D   E   D C B A
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int nsp=2*n-1;
    int nst=1;

    for(int i=1;i<=n;i++){
        int L=i;
        for(int k=1;k<=i;k++){
            if(i==n && k==i) printf("  %c ",k+64);

            else printf("%c ",k+64);
        }
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        if(i==n){
            L=i-1;
            for(int l=1;l<i;l++){
                
            printf("%c ",L+64);
            L--;
        }
        }
        else{
            for(int l=1;l<=i;l++){
            printf("%c ",L+64);
            L--;
        }
        }
        nsp-=2;
        printf("\n");
    }
    return 0;
}