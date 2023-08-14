/**
 * @author Ronald Tavarez
 * @brief Hacker Rank - Printing Pattern Using Loops Solution
 */

#include <stdio.h>

int min(int a, int b);

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int size = (n * 2) - 1;
    int row_n = 0, cell_n = 0;
    for (int row = 0; row < size; row++) {
        row_n = n - min(row, size - 1 - row);
        for (int column = 0; column < size; column++) {
            cell_n = n - min(min(column, size - 1 - column), min(row, size - 1 - row));
            printf("%d ", cell_n);
        }
        printf("\n");
    }
            
    return 0;
}

int min(int a, int b) {
    return (a > b) ? b : a;
}
