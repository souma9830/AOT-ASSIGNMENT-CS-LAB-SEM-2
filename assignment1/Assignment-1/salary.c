#include<Stdio.h>
int main(){
    float basic=5500;
    float DA;
    DA=basic*0.74;
    float hra;
    hra=basic*0.15;
    float gross;
    gross=basic+DA+hra;
    printf("His gross salary is %f",gross);
}