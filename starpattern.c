#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Print leading spaces for centering
        for (int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }

        // Print stars with spaces in between
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}