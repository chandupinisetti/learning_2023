#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* input, struct Student* students, int size) {
    int i = 0;
    char inputCopy[100]; 
    strcpy(inputCopy, input);

    char* token = strtok(inputCopy, " \n"); 

    while (token != NULL && i < size) {
        students[i].rollno = atoi(token); 

        token = strtok(NULL, " \n"); 
        strcpy(students[i].name, token); 

        token = strtok(NULL, " \n"); 
        students[i].marks = atof(token); 

        token = strtok(NULL, " \n"); 
        i++;
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    getchar(); 

    struct Student* students = malloc(size * sizeof(struct Student));

    printf("Enter the student details (rollno name marks):\n");
    for (int i = 0; i < size; i++) {
        char input[100];
        fgets(input, sizeof(input), stdin);
        parseString(input, &students[i], 1);
    }

    printf("Parsed Structured array:\n");
    for (int i = 0; i < size; i++) {
        printf("Roll No: %d, Name: %s, Marks: %.2f\n", students[i].rollno, students[i].name, students[i].marks);
    }

    free(students);
    return 0;
}
