#include <stdio.h>

void smallandlarge(int n){
    int small = 9;
    int large = 0;

    while (n != 0) {
        int digit = n % 10;
        
        if (digit < small)
            small = digit;
        
        if (digit > large)
            large = digit;
        
        n /= 10;
    }

    printf("\nsmallest and largest numbers of given number is %d  and %d", small, large);
}

int main() {
    int n;
    
    printf("\nEnter the number of inputs: ");
    scanf("%d", &n);
    
    printf("\nEnter %d numbers separated by spaces: ", n);
    
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        
        if (a >= 0 && a <= 9) {
            printf("\nNot valid !!");
        } else {
            smallandlarge(a);
        }
    }
    
    return 0;
}

