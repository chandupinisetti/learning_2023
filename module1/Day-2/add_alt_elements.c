#include <stdio.h>
#include <conio.h>

int sumAlternateElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Enter 5 integers for the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int result = sumAlternateElements(arr, size);

    printf("The sum of every alternate element starting from index 0 is: %d\n", result);

    return 0;
}
