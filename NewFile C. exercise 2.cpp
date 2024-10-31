#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100

// Function to write a sentence to "data.txt"
void writeToFile() {
    char sentence[MAX_LENGTH + 1];
    FILE *file;

    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    // Open the file in write mode
    file = fopen("data.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    // Write the sentence to the file
    fputs(sentence, file);
    fclose(file);
    printf("Sentence written to data.txt.\n");
}

// Function to read from "data.txt" and display its content
void readFromFile() {
    char sentence[MAX_LENGTH + 1];
    FILE *file;

    // Open the file in read mode
    file = fopen("data.txt", "r");
    if (file == NULL) {
        perror("Error reading file");
        return;
    }

    // Read and display the content of the file
    while (fgets(sentence, sizeof(sentence), file) != NULL) {
        printf("Content of data.txt: %s", sentence);
    }
    fclose(file);
}

// Function to append a sentence to "data.txt"
void appendToFile() {
    char sentence[MAX_LENGTH + 1];
    FILE *file;

    printf("Enter another sentence to append (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    // Open the file in append mode
    file = fopen("data.txt", "a");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    // Append the sentence to the file
    fputs(sentence, file);
    fclose(file);
    printf("Sentence appended to data.txt.\n");
}

int main() {
    // Step 1: Write initial sentence
    writeToFile();

    // Step 2: Read and display content
    readFromFile();

    // Step 3: Append a second sentence
    appendToFile();

    // Step 4: Read and display updated content
    readFromFile();

    return 0;
}
