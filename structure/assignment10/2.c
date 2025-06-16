// Write a program to store the roll no. (starting from 1), name and age of 5 students and then
// print the details of the student with roll no 2. 


#include<stdio.h>
int main(){
    struct student
    {
       int roll;
       char name[20];
       float age;
    }st[5];

    for(int i=0;i<5;i++){
       st[i].roll=i+1;
       printf("The Name of the Student whose Roll numbe is %d\n",st[i].roll);
       scanf(" %[^\n]",st[i].name);
 
     printf("The age of the Student whose Roll numbe is %d\n",st[i].roll);
     scanf("%f",&st[i].age);
        }
        for(int i=0;i<5;i++){
            if(st[i].roll==2){
                printf(" Name-%s",st[i].name);
                printf("\n Roll- %d ",st[i].roll);
                printf("\n Age-%f",st[i].age);
            }
        }
}