#include<stdio.h>
#include<conio.h>
int Marks(int Roll_No, char Name[], int Phy_marks, int Math_marks, int Che_marks);

int main() {
    int Roll_No, Phy_marks, Math_marks, Che_marks;
    char Name[50]; Phy_marks; Math_marks;Che_marks;

    printf("Enter  Student Roll_No: ");
    scanf("%d", &Roll_No);

    printf("Enter Student Name: ");
    scanf(" %[^\n]s", Name);

    printf("Enter Physics marks of the Student : ");
    scanf("%d", &Phy_marks);

    printf("Enter Math marks of the Student : ");
    scanf("%d", &Math_marks);

    printf("Enter Chemistry marks of the Student : ");
    scanf("%d", &Che_marks);

    Marks(Roll_No, Name, Phy_marks, Math_marks, Che_marks);

    return 0;
}

int Marks(int Roll_No, char Name[], int Phy_marks, int Math_marks, int Che_marks) {
    int total_marks = Phy_marks + Math_marks + Che_marks;
    float Percentage = (float)total_marks / 300 * 100;

    printf("\n---------- Summary ----------\n");
    printf(" Student Roll_No: %d\n", Roll_No);
    printf(" Student Name: %s\n", Name);
    printf(" Physics Marks of the Student : %d\n", Phy_marks);
    printf("Math Marks of the Student : %d\n", Math_marks);
    printf("Chemistry Marks of the Student : %d\n", Che_marks);
    printf("Total Marks of the Student: %d\n", total_marks);
    printf("Percentageof the Student : %.2f%%\n", Percentage);

    return 0;

}