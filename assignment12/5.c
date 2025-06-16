#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LEN 50

struct Student {
    int rollNo;
    char name[MAX_NAME_LEN];
    float totalMarks;
};

int main() {
    FILE *fp;
    struct Student s;
    int count = 0;

    fp = fopen("STUDENT.DAT", "rb");
    if (fp == NULL) {
        printf("Error opening file");
        return 1;
    }

    printf("List of all students:\n");
    printf("%-5s %-10s %-*s %s\n", "No.", "RollNo", MAX_NAME_LEN, "Name", "Marks");
    printf("------------------------------------------------------------\n");

    int serial = 1;

    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        printf("%-5d %-10d %-*s %.2f\n", serial++, s.rollNo, MAX_NAME_LEN, s.name, s.totalMarks);
    }

    rewind(fp);

    printf("\nStudents who scored 75 and above:\n");
    printf("%-5s %-10s %-*s %s\n", "No.", "RollNo", MAX_NAME_LEN, "Name", "Marks");
    printf("------------------------------------------------------------\n");

    serial = 1;
    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        if (s.totalMarks >= 75.0) {
            printf("%-5d %-10d %-*s %.2f\n", serial++, s.rollNo, MAX_NAME_LEN, s.name, s.totalMarks);
            count++;
        }
    }

    if (count == 0) {
        printf("No students scored 75 or above.\n");
    }

    fclose(fp);
    return 0;
}
