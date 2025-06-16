#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LEN 50

struct Student {
    int rollNo;
    char name[MAX_NAME_LEN];
    float totalMarks;
};

int main() {
    struct Student s;
    FILE *fp;
    int n, i;

   
    fp = fopen("STUDENT.DAT", "wb");
    if (fp == NULL) {
        printf("Error: Could not create file.\n");
        return 1;
    }

 
    printf("Enter number of students: ");
    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s.rollNo);
        printf("Name: ");
        scanf(" %[^\n]", s.name); 
        printf("Total Marks: ");
        scanf("%f", &s.totalMarks);

        fwrite(&s, sizeof(struct Student), 1, fp);
    }

    fclose(fp);
    printf("\nStudent data successfully written to STUDENT.DAT\n");
    
    return 0;
}
