#include <stdio.h>
#include <conio.h>

int findLargestNumber(int num, int* deletedDigit) {
    int largest = 0;

    
    char str[5];
    sprintf(str, "%d", num);

    
    for (int i = 0; i < 4; i++) {
        
        int temp = 0;
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                temp = temp * 10 + (str[j] - '0');
            }
        }

        
        if (temp > largest) {
            largest = temp;
            *deletedDigit = str[i] - '0';
        }
    }

    return largest;
}

int main() {
    int num;
    int deletedDigit;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNumber = findLargestNumber(num, &deletedDigit);

    printf("The digit to be deleted : %d\n", deletedDigit);
    printf("Largest number after deleting a element: %d\n", largestNumber);

    return 0;
}