#include <stdio.h>
#include <conio.h>

void Increasing(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
}


void Spaces(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf(" ");
    }
}


void Decreasing(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

int main() {
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

   
    for (i = n; i >= 1; i--) {
        Increasing(i); 
        Spaces(2 * (n - i));   
        Decreasing(i);     
        printf("\n");
    }

    return 0;
}
