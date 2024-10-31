#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int marks;
};

void writeToFile(struct Student students[], int n) {
    FILE *file = fopen("students_data.bin", "wb");

    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    fwrite(students, sizeof(struct Student), n, file);
    fclose(file);
    printf("Data written to students_data.bin.\n");
}

void readFromFile(int n) {
    struct Student students[n];
    FILE *file = fopen("students_data.bin", "rb");

    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    fread(students, sizeof(struct Student), n, file);
    fclose(file);

    printf("Data read from students_data.bin:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    writeToFile(students, n);
    readFromFile(n);

    return 0;
}
