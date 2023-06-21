#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100

typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
   
} Student;

Student students[MAX_STUDENTS]; 


int compareNames(const void* a, const void* b) {
    const Student* studentA = (const Student*)a;
    const Student* studentB = (const Student*)b;
    return strcmp(studentA->name, studentB->name);
}


int searchByName(const char* name, int numStudents) {
    Student key;
    strcpy(key.name, name);

    Student* result = bsearch(&key, students, numStudents, sizeof(Student), compareNames);

    if (result != NULL) {
        return result - students; 
    }

    return -1; 
}

int main() {
    
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

   
    for (int i = 0; i < numStudents; ++i) {
        printf("Enter the name for student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter the age for student %d: ", i + 1);
        scanf("%d", &students[i].age);
    }

 
    qsort(students, numStudents, sizeof(Student), compareNames);

   
    char searchName[MAX_NAME_LENGTH];
    printf("Enter the name to search: ");
    scanf("%s", searchName);

    int index = searchByName(searchName, numStudents);

    if (index != -1) {
        printf("Student found at index %d\n", index);
        printf("Name: %s\n", students[index].name);
        printf("Age: %d\n", students[index].age);
    } else {
        printf("Student not found.\n");
    }

    return 0;
}
