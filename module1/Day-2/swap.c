
#include <stdio.h>
#include <conio.h>
void swap(void* ptr1, void* ptr2, size_t size) {
    char* p1 = (char*)ptr1;
    char* p2 = (char*)ptr2;
    char temp;

    for (size_t i = 0; i < size; ++i) {
        temp = *(p1 + i);
        *(p1 + i) = *(p2 + i);
        *(p2 + i) = temp;
    }
}

int main() {
    int a, b;
    double x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Enter two doubles: ");
    scanf("%lf %lf", &x, &y);

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swap: a = %d, b = %d\n", a, b);

    printf("Before swap: x = %lf, y = %lf\n", x, y);
    swap(&x, &y, sizeof(double));
    printf("After swap: x = %lf, y = %lf\n", x, y);

    return 0;
}
