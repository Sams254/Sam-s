#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

void storeNStudents() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    FILE *file = fopen("students.txt", "a");

    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);

        fprintf(file, "Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    fclose(file);
    printf("Data of %d students stored in students.txt.\n", n);
}

int main() {
    storeNStudents();
    return 0;
}
