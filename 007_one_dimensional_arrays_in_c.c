/**
 * @author Ronald Tavarez
 * @brief Hacker Rank - 1D arrays in C solution
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n = 0, sum = 0;
    scanf("%d", &n);
    scanf("\n");
    int * number_array = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &number_array[i]);
        sum += number_array[i];
    }
    
    printf("%d\n", sum);
    free(number_array);
    return 0;
}