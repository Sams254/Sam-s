#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

void storeFiveStudents() {
    struct Student students[5];
    FILE *file = fopen("students.txt", "w");

    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);

        fprintf(file, "Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    fclose(file);
    printf("Data of 5 students stored in students.txt.\n");
}

int main() {
    storeFiveStudents();
    return 0;
}
