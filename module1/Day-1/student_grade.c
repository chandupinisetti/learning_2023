#include<stdio.h>
#include<conio.h>
int grade(int marks);
int main()
{
    int marks;
    printf("\n Enter the student marks: ");
    scanf("%d",&marks);
    grade(marks);
    getch();
    return 0;
}
int grade(int marks){
        if(marks >= 90 && marks <= 100)
            printf("\n Student Passed and got Grade 'A'");
        else if(marks >= 75 && marks <= 89)
            printf("\n Student PAssed and got Grade 'B'");
        else if(marks >= 60 && marks <= 74)
            printf("\n Student  Passed and got Grade 'C'");
        else if(marks >= 50 && marks <= 59)
            printf("\n Student Passed and got Grade 'D'");
        else
            printf("\n Student failed  and got Grade 'F'");
        return 0;
}