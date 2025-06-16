// Write a program to store and print the roll no., name, age and marks of a student using structure

#include<stdio.h>
#include<string.h>
int main(){
    struct student
    {
       int roll;
       char name[50];
       float age;
       int marks;
    } student1;

    printf("Student 1 roll number");
    scanf("%d",&student1.roll);
 
    strcpy(student1.name,"soumik sil");
      printf("\nStudent 1 age");
      scanf("%f",&student1.age);
       printf("\nStudent 1 marks");
       scanf("%d",&student1.marks);
       printf("The name of the student is %s\n",student1.name);
       printf("The roll number %d",student1.roll);


    
}
