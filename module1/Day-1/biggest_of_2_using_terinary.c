#include <stdio.h>
#include <conio.h>
void biggest(int a, int b);

int main() {
    int a, b;
    printf("Enter a and b values: ");
    scanf("%d %d", &a, &b);
    biggest(a, b);
    getch();
    return 0;
}

void biggest(int a, int b) {
    a > b ? printf("a is bigger than b \n") : (b > a ? printf("b is bigger than a\n") : printf("Both a and b are equal\n"));
}
