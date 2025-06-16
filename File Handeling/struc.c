#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float totalMarks;
};

int main() {
    FILE *fp;
    struct Student s;
    int n;
    fp = fopen("STUDENT.DAT", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s.rollNo);
        printf("Name: ");
        scanf(" %[^\n]", s.name); 
        printf("Total Marks: ");
        scanf("%f", &s.totalMarks);

        fprintf(fp, "%d %s %.2f\n", s.rollNo, s.name, s.totalMarks);
    }

    fclose(fp);
    printf("\nStudent details stored successfully in STUDENT.DAT\n");

    return 0;
}
