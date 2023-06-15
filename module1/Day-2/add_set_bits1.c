#include <stdio.h>

// Function to count the number of set bits in a number
int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

// Function to count the total number of set bits in an array
int countTotalSetBits(int arr[], int size) {
    int totalBits = 0;
    for (int i = 0; i < size; i++) {
        totalBits += countSetBits(arr[i]);
    }
    return totalBits;
}

int main() {
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Enter %d integers in hexadecimal format:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%x", &arr[i]);
    }

    int totalSetBits = countTotalSetBits(arr, size);

    printf("The total number of set bits in the given array is %d\n", totalSetBits);

    return 0;
}
