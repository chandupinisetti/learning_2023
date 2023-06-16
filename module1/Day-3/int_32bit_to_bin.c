#include <stdio.h>
#include <conio.h>

void printBits(int num) {
    int i;

    
    for (i = 31; i >= 0; i--) {
        
        if (num & (1 << i)) {
            printf("1");
        } else {
            printf("0");
        }

        
        if (i % 8 == 0) {
            printf(" ");
        }
    }

    printf("\n");
}

int main() {
    int num;

    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printf("Bits of the integer: ");
    printBits(num);

    return 0;
}
