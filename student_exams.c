//program to store students examination results 
/*
Name:Elsy Kambo 
Reg No:PA106/G/29232/25
*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char reg_no[20];
    float total_marks;
};

int main() {
    FILE *file;
    struct Student student;

    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error opening results.dat\n");
        return 1;
    }

    printf("Student Results:\n");
    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("Name: %s, Marks: %.2f\n", student.name, student.total_marks);
    }

    fclose(file);
    return 0;
}