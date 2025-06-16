#include <stdio.h>
int main(){
    int marks;
    printf("Enter marks: \n");
    scanf("%d",&marks);
    switch(marks/10){
        case 10: 
        case 9: printf("O\n");
        break;
        case 8: printf("E\n");
        break;
        case 7: printf("A\n");
        break;
        case 6: printf("B\n");
        break;
        case 5: printf("C\n");
        break;
        case 4: printf("D\n");
        break;
        case 3:   
        case 2:
        case 1:
        case 0:  
        printf("F\n");
        break;
        default:
        printf("Invalid marks");
    }
    return 0;
}