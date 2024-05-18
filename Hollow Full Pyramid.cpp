#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Outer loop for rows
    for (i = 1; i <= n; i++) {
        // Inner loop for spaces
        for (j = i; j < n; j++)
            printf(" ");

        // Inner loop for printing stars
        for (j = 1; j <= (2 * i - 1); j++) {
            // Print star for the first and last column, or for the first row
            if (j == 1 || j == (2 * i - 1) || i == n)
                printf("*");
            else
                printf(" ");
        }

        // Move to the next line after each row is printed
        printf("\n");
    }

    return 0;
}

