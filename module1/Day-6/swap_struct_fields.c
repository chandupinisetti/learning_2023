#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    char qualification[50];
    float percentage;
};

void swapFields(struct Person* p1, struct Person* p2) {
    struct Person tempPerson;

    // Swap name field
    strcpy(tempPerson.name, p1->name);
    strcpy(p1->name, p2->name);
    strcpy(p2->name, tempPerson.name);

    // Swap age field
    int tempAge = p1->age;
    p1->age = p2->age;
    p2->age = tempAge;

    // Swap qualification field
    strcpy(tempPerson.qualification, p1->qualification);
    strcpy(p1->qualification, p2->qualification);
    strcpy(p2->qualification, tempPerson.qualification);

    // Swap percentage field
    float tempPercentage = p1->percentage;
    p1->percentage = p2->percentage;
    p2->percentage = tempPercentage;
}

int main() {
    struct Person person1, person2;

   
    printf("Enter details for person1:\n");
    printf("Name: ");
    scanf("%s", person1.name);
    printf("Age: ");
    scanf("%d", &person1.age);
    printf("Qualification: ");
    scanf("%s", person1.qualification);
    printf("Percentage: ");
    scanf("%f", &person1.percentage);

    
    printf("\nEnter details for person2:\n");
    printf("Name: ");
    scanf("%s", person2.name);
    printf("Age: ");
    scanf("%d", &person2.age);
    printf("Qualification: ");
    scanf("%s", person2.qualification);
    printf("Percentage: ");
    scanf("%f", &person2.percentage);

   
    printf("\nOriginal Data:\n");
    printf("Person1 - Name: %s, Age: %d, Qualification: %s, Percentage: %.2f\n",
           person1.name, person1.age, person1.qualification, person1.percentage);
    printf("Person2 - Name: %s, Age: %d, Qualification: %s, Percentage: %.2f\n",
           person2.name, person2.age, person2.qualification, person2.percentage);


    swapFields(&person1, &person2);

    printf("\nSwapped Data:\n");
    printf("Person1 - Name: %s, Age: %d, Qualification: %s, Percentage: %.2f\n",
           person1.name, person1.age, person1.qualification, person1.percentage);
    printf("Person2 - Name: %s, Age: %d, Qualification: %s, Percentage: %.2f\n",
           person2.name, person2.age, person2.qualification, person2.percentage);

    return 0;
}
