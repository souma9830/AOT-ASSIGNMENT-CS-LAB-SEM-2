#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
    int a,b,c,max=0;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    c=atoi(argv[3]);
    if(a>b && a>c){
        max=a;
    }
    else if(b>c && b>a){
        max=b;
    }
    else{
        max=c;
    }
    printf("Max vlaue is %d",max);
}
